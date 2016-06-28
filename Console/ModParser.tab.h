/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_MODPARSER_TAB_H_INCLUDED
# define YY_YY_MODPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOUBLE = 258,
    WORD = 259,
    WSPACE = 260,
    LBRACE = 261,
    RBRACE = 262,
    LEFT = 263,
    RIGHT = 264,
    LBRACK = 265,
    RBRACK = 266,
    COMMA = 267,
    SEMCOL = 268,
    END = 269,
    PLUS = 270,
    MINUS = 271,
    TIMES = 272,
    DIVIDE = 273,
    POWER = 274,
    EXCLAM = 275,
    APPLY = 276,
    MAP = 277,
    RULE = 278,
    EQUALS = 279,
    SAMEQ = 280,
    PI = 281,
    E = 282,
    IMAG = 283,
    PREV = 284,
    DEG = 285,
    DEGSYM = 286,
    GOLDEN = 287,
    EULGAMMA = 288,
    CATALAN = 289,
    KHINCHIN = 290,
    GLAISHER = 291,
    GOLDANGLE = 292,
    AND = 293,
    OR = 294,
    TRUE = 295,
    FALSE = 296,
    STRJOIN = 297,
    PATTERN1 = 298,
    SLOT = 299,
    DOLLAR = 300,
    QUOTE = 301,
    PERIOD = 302,
    INFTY = 303,
    INDET = 304,
    AT = 305,
    UNDER = 306,
    COLON = 307,
    GRAPHICS_F = 308,
    QUIT = 309,
    NEG = 310
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 50 "ModParser.y" /* yacc.c:1909  */

    double num;
    char *string;
    
    double _Complex comp;
    
    double *nums;
    double *multi;

#line 120 "ModParser.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MODPARSER_TAB_H_INCLUDED  */
