%{
    #include "ModParser.tab.h"
    #include <math.h>
    #include <stdlib.h>
    void yyerror(char *);
%}

%%
[0-9]+("."[0-9]+)? {
    yylval.num = atof(yytext);
    return DOUBLE;
}

" "             { return WSPACE; }
"\t"            { return WSPACE; }
"\n"            { return END; }
"\r"            { return END; }
"Quit[]"        { return QUIT; }
"Exit[]"        { return QUIT; }

"\["            { return LBRACE; }
"\]"            { return RBRACE; }
"("             { return LEFT; }
")"             { return RIGHT; }
"\{"            { return LBRACK; }
"\}"            { return RBRACK; }
","             { return COMMA; }
";"             { return SEMCOL; }

"@@"            { return APPLY; }
"/@"            { return MAP; }
"/."            { return RULE; }

"="             { return EQUALS; }
"==="           { return SAMEQ; }

"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return TIMES; }
"/"             { return DIVIDE; }
"^"             { return POWER; }
"!"             { return EXCLAM; }

"&&"            { return AND; }
"||"            { return OR; }
"True"          { return TRUE; }
"False"         { return FALSE; }
"<>"            { return STRJOIN; }

"&"             { return PATTERN1; }
"#"             { return SLOT; }

"Pi"            { return PI; }
"E"             { return E; }
"I"             { return IMAG; }

"%"             { return PREV; }

"Graphics\["    { return GRAPHICS_F; }

"$"             { return DOLLAR; }
"\""            { return QUOTE; }
"\."            { return PERIOD; }

"Infinity"      { return INFTY; }
"Indeterminate" { return INDET; }

"@"             { return AT; }

"Degree"        { return DEG; }
"°"             { return DEGSYM; }
"GoldenRatio"   { return GOLDEN; }
"EulerGamma"    { return EULGAMMA; }
"Catalan"       { return CATALAN; }
"Khinchin"      { return KHINCHIN; }
"Glaisher"      { return GLAISHER; }
"GoldenAngle"   { return GOLDANGLE; }


"\_"            { return UNDER; }
":"             { return COLON; }

([A-Z]?[a-z]?)+[0-9]*   {
    yylval.string = strdup(yytext);
    return WORD;
}
%%

int yywrap(void) {
    return 1;
}


























