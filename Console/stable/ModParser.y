%{
    #define _GNU_SOURCE
    #include <stdio.h>
    #include <stdlib.h>
    #include <limits.h>
    #include <complex.h>
    #include <tgmath.h>
    #include <string.h>
    #include <stdbool.h>
    #include <Python.h>
    #include "ModParser.tab.h"
    #include "CoreEvaluate.h"
    #include "Graphics.h"
    #include "Trig.h"
    
    void yyerror(char *s);
    int yylex(void);
    double myGlobalVars(char *word);
    double mySearch(char *sym, char *names[30], double values[30]);
    
    int _n = 1;
    double _prev;
    char *lastCommand;
    
    char *varNames[30];
    double varValues[30];
    int m = 0;
    
    double argsList[10] = {0};
    int p = 0;
    double L[10] = {0};
    
    double _Complex compArgsList[10] = {0};
    
    double argsArray[10][10] = {0};
    int q=0;
    int r=0;
    double M[10][10] = {0};
    
%}

%union {
    double num;
    char *string;
    
    double _Complex comp;
    
    double *nums;
    double *multi;
};

%start Input

%token <num> DOUBLE
%token <string> WORD WSPACE LBRACE RBRACE LEFT RIGHT LBRACK RBRACK COMMA SEMCOL
%token <string> END
%token <num> PLUS MINUS TIMES DIVIDE POWER EXCLAM

%token <string> APPLY MAP RULE EQUALS SAMEQ
%token <string> PI E IMAG PREV DEG DEGSYM GOLDEN EULGAMMA CATALAN KHINCHIN GLAISHER GOLDANGLE
%token <string> AND OR TRUE FALSE STRJOIN PATTERN1 SLOT DOLLAR QUOTE PERIOD INFTY INDET AT UNDER COLON
%token <string> GRAPHICS_F

%token <string> QUIT

%type <num> expr
%type <num> symbol
%type <string> text
%type <num> boolean
%type <num> sequence
%type <nums> list
%type <nums> listSeq
%type <multi> array
%type <num> double
%type <comp> imaginary
%type <comp> complex
%type <num> functDecl

%right IMAG
%left TIMES DIVIDE POWER EXCLAM EQUALS
%left PLUS MINUS
%left NEG
%left WSPACE QUOTE

%left AND OR

%%
Input: /* empty */
    | Input line
;

line: END               { YYABORT; }
    | expr END          { myDisplay(_n, $1); _n++; p = 0; memset(argsList, 0, sizeof(argsList)); YYACCEPT; }
    | expr SEMCOL line  {}
    | imaginary END     { fprintf(stderr, "\nOut[%d]:= %.10g I\n\n", _n, cimag($1)); _n++; YYACCEPT; }
    | complex END       { myComplexDisplay(_n, $1); YYACCEPT; }
    | text END          { fprintf(stderr, "\nOut[%d]:= %s\n\n", _n, $1); _n++; YYACCEPT; }
    | list END          { myListDisplay(_n, L); _n++; p = 0; memset(L, 0, sizeof(L)); YYACCEPT; }
    | array END         { myArrayDisplay(_n, M); _n++; p = 0; q=0; YYACCEPT; }
    | functDecl END     { fprintf(stderr, "\nOut[%d]:= 0\n\n", _n); _n++; YYACCEPT; }
    | QUIT              { exit(0); }
;

expr:
    double                          { $$ = $1; _prev = $$; }
    | boolean                       { $$ = $1; _prev = $$; }
    | WORD LBRACE RBRACE            { $$ = myNullaryEval($1); _prev = $$; }
    | WORD LBRACE sequence RBRACE   { $$ = myEvaluate($1, argsList); _prev = $$; }
    | WORD LBRACE list RBRACE       { $$ = myListToNum($1, argsList); _prev = $$; }
    | WORD LBRACE text COMMA list RBRACE    {$$ = mySpecialEval($1, $3, argsList); _prev = $$; }
    | WSPACE expr                   { $$ = $2; _prev = $$; } /* deletes all whitespace before */
    | expr WSPACE                   { $$ = $1; _prev = $$; } /* deletes all whitespace after */
    | LEFT expr RIGHT               { $$ = $2; _prev = $$;}
    | expr PLUS expr                { $$ = $1 + $3; _prev = $$; }
    | expr MINUS expr               { $$ = $1 - $3; _prev = $$;}
    | MINUS expr %prec NEG          { $$ = -$2; _prev = $$;}
    | expr TIMES expr               { $$ = $1 * $3; _prev = $$;}
    | expr WSPACE expr              { $$ = $1 * $3; _prev = $$; }
    | expr DIVIDE expr              { $$ = $1 / $3; _prev = $$;}
    | expr POWER expr               { $$ = pow($1, $3); _prev = $$;}
    | expr EXCLAM                   { $$ = tgamma($1 + 1); _prev = $$; }
    | expr AND expr                 { $$ = $1 && $3; _prev = $$; }
    | expr OR expr                  { $$ = $1 || $3; _prev = $$; }
    | GRAPHICS_F text COMMA text RBRACE        { myGraphics($2, $4); }
    | EXCLAM expr                   { $$ = !($2); _prev = $$; }
    | WORD EQUALS expr              { $$ = varValues[m] = $3; varNames[m] = $1; m++; }
    | symbol                        { $$ = $1; _prev = $$; }
;

symbol:
    AT WORD                         { $$ = mySearch($2, varNames, varValues); }
;

text:
    WORD                            { $$ = $1; }
    | WORD LBRACE text RBRACE       { char *a0; asprintf(&a0, "%s[%s]", $1, $3); $$ = a0; } /* used for plotting */
    | WSPACE text                   { $$ = $2; }
    | text WSPACE                   { $$ = $1; }
    | LEFT text RIGHT               { char *a1; asprintf(&a1, "(%s)", $2); $$ = a1; }
    | text PLUS text                { char *a2; asprintf(&a2, "%s+%s", $1, $3); $$ = a2; }
    | text MINUS text               { char *a3; asprintf(&a3, "%s-%s", $1, $3); $$ = a3; }
    | MINUS text %prec NEG          { char *a4; asprintf(&a4, "-%s", $2); $$ = a4; }
    | text TIMES text               { char *a5; asprintf(&a5, "%s*%s", $1, $3); $$ = a5; }
    | text WSPACE text              { char *a6; asprintf(&a6, "%s %s", $1, $3); $$ = a6; }
    | text DIVIDE text              { char *a7; asprintf(&a7, "%s/%s", $1, $3); $$ = a7; }
    | text POWER text               { char *a8; asprintf(&a8, "%s^%s", $1, $3); $$ = a8; }
    | text EXCLAM                   { char *a9; asprintf(&a9, "%s!", $1); $$ = a9; }
    | text AND text                 { char *b0; asprintf(&b0, "%s && %s", $1, $3); $$ = b0; }
    | text OR text                  { char *b1; asprintf(&b1, "%s || %s", $1, $3); $$ = b1; }
    | EXCLAM text                   { char *b2; asprintf(&b2, "!%s", $2); $$ = b2; }
    | expr PLUS text                { char *b3; asprintf(&b3, "%.10g+%s", $1, $3); $$ = b3; }
    | expr MINUS text               { char *b4; asprintf(&b4, "%.10g-%s", $1, $3); $$ = b4; }
    | expr TIMES text               { char *b5; asprintf(&b5, "%.10g*%s", $1, $3); $$ = b5; }
    | expr WSPACE text              { char *b6; asprintf(&b6, "%.10g %s", $1, $3); $$ = b6; }
    | expr DIVIDE text              { char *b7; asprintf(&b7, "%.10g/%s", $1, $3); $$ = b7; }
    | expr POWER text               { char *b8; asprintf(&b8, "%.10g^%s", $1, $3); $$ = b8; }
    | expr AND text                 { char *b9; asprintf(&b9, "%.10g && %s", $1, $3); $$ = b9; }
    | expr OR text                  { char *c0; asprintf(&c0, "%.10g || %s", $1, $3); $$ = c0; }
    | text PLUS expr                { char *c1; asprintf(&c1, "%.10g+%s", $3, $1); $$ = c1; }
    | text MINUS expr               { char *c2; asprintf(&c2, "%s-%.10g", $1, $3); $$ = c2; }
    | text TIMES expr               { char *c3; asprintf(&c3, "%.10g*%s", $3, $1); $$ = c3; }
    | text WSPACE expr              { char *c4; asprintf(&c4, "%.10g %s", $3, $1); $$ = c4; }
    | text DIVIDE expr              { char *c5; asprintf(&c5, "%s/%.10g", $1, $3); $$ = c5; }
    | text POWER expr               { char *c6; asprintf(&c6, "%s^%.10g", $1, $3); $$ = c6; }
    | text AND expr                 { char *c7; asprintf(&c7, "%s && %.10g", $1, $3); $$ = c7; }
    | text OR expr                  { char *c8; asprintf(&c8, "%s || %.10g", $1, $3); $$ = c8; }
    | LEFT TIMES text TIMES RIGHT   { YYACCEPT; } /* enables comments */
    | QUOTE text QUOTE              { $$ = $2; }
;

double:
    DOUBLE                          { $$ = $1; }
    | PI                            { $$ = M_PI; }
    | E                             { $$ = exp(1); }
    | PREV                          { $$ = _prev; }
    | DOLLAR WORD                   { $$ = myGlobalVars($2); }
    | INFTY                         { $$ = (double) INFINITY; }
    | INDET                         { $$ = (double) NAN; }
    | DEG                           { $$ = M_PI / 180; }
    | DOUBLE DEGSYM                 { $$ = $1 * M_PI / 180; }
    | GOLDEN                        { $$ = (sqrt(5) + 1)/2; }
    | EULGAMMA                      { $$ = 0.57721566490153286060651209008240243104215933593992; }
    | CATALAN                       { $$ = 0.91596559417721901505460351493238411077414937428167;}
    | KHINCHIN                      { $$ = 2.6854520010653064453097148354817956938203822939945;}
    | GLAISHER                      { $$ = 1.2824271291006226368753425688697917277676889273250;}
    | GOLDANGLE                     { $$ = (3 - sqrt(5)) * M_PI; }
    | imaginary TIMES imaginary     { $$ = creal($1 * $3); }
    | imaginary WSPACE imaginary    { $$ = creal($1 * $3); }
;

imaginary:
    IMAG                            { $$ = _Complex_I; }
    | expr IMAG %prec IMAG          { $$ = $1*_Complex_I; }
    | WORD LBRACE imaginary RBRACE  { $$ = myCompToNum($1, $3); }
    | WSPACE imaginary              { $$ = $2; }
    | imaginary WSPACE              { $$ = $1; }
    | LEFT imaginary RIGHT          { $$ = $2; }
    | expr TIMES imaginary          { $$ = $1 * $3; }
    | imaginary TIMES expr          { $$ = $1 * $3; }
    | expr WSPACE imaginary         { $$ = $1 * $3; }
    | imaginary WSPACE expr         { $$ = $1 * $3; }
    | expr DIVIDE imaginary         { $$ = $1 / $3; }
    | imaginary DIVIDE expr         { $$ = $1 / $3; }
    | IMAG POWER expr               { $$ = cpow(_Complex_I, $3); }
;

complex:
    expr PLUS imaginary             { $$ = $1 + $3; }
    | imaginary PLUS expr           { $$ = $3 + $1; }
    | expr MINUS imaginary          { $$ = $1 - $3; }
    | WORD LBRACE complex RBRACE    { $$ = myCompToNum($1, $3); }
    | LEFT complex RIGHT            { $$ = $2; }
    | WSPACE complex                { $$ = $2; }
    | complex WSPACE                { $$ = $1; }
    | complex PLUS complex          { $$ = $1 + $3; }
    | complex MINUS complex         { $$ = $1 - $3; }
    | MINUS complex %prec NEG       { $$ = -$2; }
    | complex TIMES complex         { $$ = $1 * $3; }
    | complex WSPACE complex        { $$ = $1 * $3; }
    | complex DIVIDE complex        { $$ = $1 / $3; }
    | complex POWER complex         { $$ = cpow($1, $3); }
    | expr PLUS complex             { $$ = $1 + $3; }
    | expr MINUS complex            { $$ = $1 - $3; }
    | complex POWER expr            { $$ = cpow($1, $3); }
;

boolean:
    TRUE                            { $$ = true; }
    | FALSE                         { $$ = false; }
;

sequence:
    sequence COMMA expr             { argsList[p] = $3; p++; }
    | expr                          { argsList[p] = $1; p++; }
;

list:
    LBRACK sequence RBRACK          { for (int i=0; i<10; i++) {L[i] = argsList[i]; } }
    | WSPACE list                   { $$ = $2; }
    | list WSPACE                   { $$ = $1; }
    | WORD LBRACE AT list RBRACE    { $$ = myListEval($1, $4); }
;

listSeq:
    listSeq COMMA list              { for (int i=0; i<10; i++) { argsArray[q][i] = L[i]; L[i] = 0; } memset(L, 0, sizeof(L)); q++; }
    | list                          { for (int i=0; i<10; i++) { argsArray[q][i] = L[i]; L[i] = 0; } memset(L, 0, sizeof(L)); q++; }
;

array:
    LBRACK listSeq RBRACK           { for (int i=0; i<10; i++) { for (int j=0; j<10; j++) { M[i][j] = argsArray[i][j]; } } }
;

functDecl:
    WORD LBRACE UNDER text RBRACE COLON EQUALS expr     { $$ = 0; }
;

%%

void yyerror(char *s) {
    fprintf(stderr, "\nSyntax::sntxf: \"%s\" cannot be followed by \"that\"\n\n", s);
}

double mySearch(char *sym, char *names[30], double values[30]) {
    for (int i=0; i < 30; i++) {
        if (strcmp(sym, names[i]) == 0) {
            return values[i];
        }
    }
    
    return 0;
}

double myGlobalVars(char *word) {
    if (strcmp(word, "Line") == 0) {
        return _n;
    } else if (strcmp(word, "HistoryLength") == 0) {
        return (double) INFINITY;
    } else {
        return 0;
    }
}

int main(void) {
    printf("\nModicum, version 0.0 (alpha)\nBenjamin S. Osenbach\nType \"Quit[]\" or \"Exit[]\" to exit\n\n");

    for(int n=1;; n++) {
        fprintf(stderr, "In[%d]:= ", n);
        
        // This section prevents the user from skipping to the next input
        while(yyparse()) {
            fprintf(stderr, "In[%d]:= ", n);
        };
        
    }
    
}
