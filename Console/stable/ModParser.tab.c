/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ModParser.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <limits.h>
    #include <complex.h>
    #include <tgmath.h>
    #include <string.h>
    #include <stdbool.h>
    /*#include <Python.h>*/
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
    

#line 106 "ModParser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ModParser.tab.h".  */
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

union YYSTYPE
{
#line 41 "ModParser.y" /* yacc.c:355  */

    double num;
    char *string;
    
    double _Complex comp;
    
    double *nums;
    double *multi;

#line 212 "ModParser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MODPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 229 "ModParser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1562

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  279

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    87,    87,    88,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   130,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   227,
     228,   232,   233,   237,   238,   239,   240,   244,   245,   249,
     253
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOUBLE", "WORD", "WSPACE", "LBRACE",
  "RBRACE", "LEFT", "RIGHT", "LBRACK", "RBRACK", "COMMA", "SEMCOL", "END",
  "PLUS", "MINUS", "TIMES", "DIVIDE", "POWER", "EXCLAM", "APPLY", "MAP",
  "RULE", "EQUALS", "SAMEQ", "PI", "E", "IMAG", "PREV", "DEG", "DEGSYM",
  "GOLDEN", "EULGAMMA", "CATALAN", "KHINCHIN", "GLAISHER", "GOLDANGLE",
  "AND", "OR", "TRUE", "FALSE", "STRJOIN", "PATTERN1", "SLOT", "DOLLAR",
  "QUOTE", "PERIOD", "INFTY", "INDET", "AT", "UNDER", "COLON",
  "GRAPHICS_F", "QUIT", "NEG", "$accept", "Input", "line", "expr",
  "symbol", "text", "double", "imaginary", "complex", "boolean",
  "sequence", "list", "listSeq", "array", "functDecl", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

#define YYPACT_NINF -30

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-30)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -30,   333,   -30,   -29,    -3,   808,   847,  1039,   -30,  1078,
    1117,   -30,   -30,    -7,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,    26,  1117,   -30,   -30,    37,  1117,
     -30,   -30,    18,   -30,   107,   -30,   170,   383,   -30,     5,
       1,     8,   -30,   551,  1156,    52,  1156,   101,   141,   -30,
     -30,   -30,    57,  1078,  1117,   153,   255,   659,   280,    73,
    1039,  1156,  1156,  1156,  1409,   239,   222,    64,   254,    12,
      15,   307,    66,   112,  1117,   886,  1117,   530,   590,  1156,
     -30,  1425,     9,   -30,  1339,  1300,   488,   -30,  1078,  1078,
    1117,  1117,  1117,   -30,   -30,  1117,  1117,  1265,   -30,  1117,
    1117,  1117,  1117,  1117,   -30,  1117,  1117,  1335,   -30,  1156,
    1156,  1156,  1230,   -30,  1195,  1195,  1195,  1195,  1195,   -30,
     -30,   -30,   -30,   -30,   282,  1117,  1441,   410,   428,   557,
      32,    11,   123,  1156,  1203,   604,   655,   210,   -30,   -30,
     -30,   -30,   706,   263,   -30,   204,   322,    81,  1203,  1335,
    1156,  1156,  1156,  1156,  1156,  1156,  1156,   -30,  1156,   -30,
     346,   757,   101,  1377,    12,  1117,  1117,  1203,   -30,  1117,
     101,   141,   -30,   -30,    12,    15,    72,    66,    12,    15,
      72,    66,   530,   590,    72,   530,   590,    72,   530,   590,
     -30,   -30,   -30,   -30,   213,   141,   158,    15,   158,    15,
     439,   590,   439,   590,   439,   590,    65,   -30,    65,   -30,
     263,   -30,    44,  1203,    72,  1203,   132,  1195,  1195,  1195,
    1457,   -30,    66,    66,   390,   390,   162,   390,    74,   346,
      60,  1482,   -30,   346,   -30,   -30,   -30,   -30,   757,   937,
     137,   988,  1425,  1498,   188,   263,    81,    81,  1203,  1203,
    1203,   -30,   -30,  1409,    74,    64,    12,    12,  1523,   655,
     263,  1393,    81,  1195,  1195,    53,   -30,    55,    63,   -30,
     706,   -30,    81,    81,   346,   104,   -30,  1156,  1409
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    72,    38,     0,     0,     0,     4,     0,
       0,    73,    74,    89,    75,    79,    81,    82,    83,    84,
      85,    86,   119,   120,     0,     0,    77,    78,     0,     0,
      13,     3,     0,    36,     0,    14,     0,     0,    15,     0,
       0,     0,    80,     0,     0,    38,     0,    20,    40,    92,
     107,   124,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,   128,     0,    25,
      45,     0,   111,    38,     0,     0,     0,    34,    53,     0,
      76,     0,     0,    37,     0,    21,     0,     5,     0,     0,
       0,     0,     0,    30,    90,     0,     0,    41,     9,     0,
       0,     0,     0,     0,    50,     0,     0,    93,     7,     0,
       0,     0,   108,     8,     0,     0,     0,     0,     0,   125,
      10,    11,    12,    16,     0,     0,   122,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,    22,    42,
      94,   106,     0,    20,    92,     0,     0,    25,    34,    21,
       0,     0,     0,     0,     0,     0,     0,   123,     0,   129,
       0,     0,    20,     0,    25,     0,     0,   101,    71,     0,
      27,    57,    97,     6,    23,    54,   102,   116,    24,    55,
     104,   117,    26,    56,    95,    28,    58,    99,    29,    59,
      31,    60,    32,    61,    65,    47,    62,    43,    63,    44,
      64,    46,    66,    48,    67,    49,    68,    51,    69,    52,
      98,    88,   103,    96,    87,   100,     0,     0,     0,     0,
       0,   113,   109,   110,   112,   114,   118,   115,    37,     0,
       0,     0,    39,     0,    91,   105,    17,    18,     0,     0,
      38,     0,   122,     0,     0,    27,    23,    24,    26,    28,
      29,    31,    32,   121,     0,   127,    23,    24,     0,     0,
      20,     0,    25,     0,     0,     0,   126,     0,     0,    70,
       0,    33,    23,    24,     0,     0,    19,     0,   130
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -30,   -30,    45,    -1,   -30,   384,   -30,   193,   202,   -30,
      -6,     6,   -30,   -30,   -30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    31,    81,    33,   127,    35,    65,   129,    38,
     130,   131,    68,    40,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      32,    66,    42,    43,    47,    55,    64,    39,    69,    77,
     119,    51,    79,    67,    97,   121,   119,    85,   237,   120,
      97,    44,   122,    85,    99,   100,   101,   102,   103,   104,
      80,    86,    87,    88,    89,    90,    91,    92,    93,   236,
      66,    83,   126,   134,   158,    64,    94,   105,   106,   149,
      95,    96,    47,   105,   106,   168,    95,    96,   135,   143,
     145,   147,   148,   136,    93,   119,    51,   266,   119,   119,
     276,   112,    94,   162,   163,   164,    44,   107,   167,   142,
     265,    44,   155,   156,   170,    32,   149,   174,   178,   182,
     185,   188,    39,    94,   190,   192,   194,    44,   196,   198,
     200,   202,   204,   274,   206,   208,   210,   275,   212,   213,
     215,   220,    97,   220,   220,   220,   220,   226,   161,   155,
     156,    98,    99,   100,   101,   102,   103,   104,   277,   238,
     230,   173,   143,     0,   126,   126,    44,     0,   259,    95,
      96,   242,     0,   270,     0,   105,   106,    44,   245,   246,
     247,   248,   249,   250,   251,   252,    44,   253,    85,     0,
     242,    44,   138,    85,   256,   257,   255,   149,    88,    89,
      90,    91,    92,    93,     0,   107,     0,   263,   264,   105,
     106,    94,    93,     0,   108,   109,    94,   110,   111,     0,
      94,    95,    96,   107,    36,   234,    95,    96,    49,    57,
     155,   156,    71,    37,     0,   110,   111,    50,    58,   149,
       0,    72,     0,   138,     0,    97,   260,   261,   262,   150,
     151,   152,   153,   154,    93,    99,   100,   239,   102,   103,
     104,     0,    94,   157,   158,    51,   128,   242,   200,   268,
     162,    94,   155,   156,   107,     0,    49,    51,   105,   106,
       0,    95,    96,   144,   146,    50,   110,   111,   126,     0,
      97,     0,   272,   273,   139,   159,   160,   144,   146,   242,
      99,   100,   101,   102,   103,   104,   278,     0,   172,    36,
     230,   176,   180,   184,   187,   112,   228,   229,    37,   141,
     177,   181,    46,   105,   106,   114,   115,   116,   117,   118,
     211,   155,   156,   214,     0,    71,     0,    71,    71,    71,
      71,    71,   107,     0,   221,     0,   222,   223,   224,   225,
     227,     0,   109,     0,   110,   111,   144,   107,   128,   128,
       0,   140,     0,     2,     0,   244,     3,     4,     5,   110,
     111,     6,   172,     7,     0,   184,   187,     8,     0,     9,
     254,   229,     0,    10,   244,     0,    46,     0,     0,    11,
      12,    13,    14,    15,     0,    16,    17,    18,    19,    20,
      21,     0,     0,    22,    23,     0,     0,     0,    24,    25,
       0,    26,    27,    28,     0,    34,    29,    30,   112,    48,
      56,     0,     0,    70,    78,   112,     0,   113,   114,   115,
     116,   117,   118,     0,     0,   114,   115,     0,     0,    82,
      49,    57,    71,    84,     0,    97,     0,   232,     0,    50,
      58,    72,   233,     0,     0,    99,   100,   101,   102,   103,
     104,   244,     0,   107,   144,   234,     0,    48,   137,     0,
       0,     0,     0,   109,    85,   110,   111,     0,   105,   106,
       0,     0,   128,     0,   165,   166,   176,   180,    48,    56,
      70,     0,     0,   244,     0,   177,   181,    94,     0,   171,
      34,     0,   175,   179,   183,   186,   189,    95,    96,   191,
     193,   195,     0,   197,   199,   201,   203,   205,     0,   207,
     209,     3,     4,     5,     0,     0,     6,     0,     7,     0,
       0,     0,     8,     0,     9,     0,     0,     0,    10,   231,
       0,     0,     0,     0,    11,    12,    13,    14,    15,     0,
      16,    17,    18,    19,    20,    21,   243,     0,    22,    23,
       0,     0,     0,    24,    25,    85,    26,    27,    28,     0,
       0,    29,    30,     0,     0,   165,   166,     0,     0,   175,
     179,     0,     0,   258,     3,    45,     5,     0,   123,     6,
       0,    46,   112,     0,   235,     0,     0,     9,    95,    96,
       0,    10,   114,   115,   116,   117,   118,    11,    12,    13,
      14,    15,     0,    16,    17,    18,    19,    20,    21,     0,
       0,    22,    23,     0,     0,    97,    24,    25,     0,    26,
      27,   124,   125,     0,    29,    99,   100,     3,    45,     5,
       0,   123,     6,     0,    46,     0,     0,     0,     0,     0,
       9,     0,   243,   201,    10,    48,     0,     0,   105,   106,
      11,    12,    13,    14,    15,     0,    16,    17,    18,    19,
      20,    21,     0,   243,    22,    23,     0,     0,     0,    24,
      25,     0,    26,    27,   124,     0,     0,    29,     3,    45,
       5,     0,   123,     6,   107,    46,     0,     0,   140,     0,
       0,     9,     0,     0,   109,    10,   110,   111,     0,     0,
       0,    11,    12,    13,    14,    15,     0,    16,    17,    18,
      19,    20,    21,     0,     0,    22,    23,     0,     0,     0,
      24,    25,     0,    26,    27,    28,     0,     0,    29,     3,
     240,   241,     0,   123,    75,     0,    46,     0,     0,     0,
       0,     0,    76,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,     0,    16,    17,
      18,    19,    20,    21,     0,     0,    22,    23,     0,     0,
       0,    24,    25,     0,    26,    27,   124,     0,     0,    29,
       3,   240,   241,     0,   123,    75,     0,    46,     0,     0,
       0,     0,     0,    76,     0,     0,     0,    10,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,     0,    16,
      17,    18,    19,    20,    21,     0,     0,    22,    23,     0,
       0,     0,    24,    25,     0,    26,    27,    28,     0,     0,
      29,     3,    45,     5,     0,     0,     6,     0,    46,     0,
       0,     0,     0,     0,     9,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,     0,
      16,    17,    18,    19,    20,    21,     0,     0,    22,    23,
       3,    52,    53,    24,    25,     6,    26,    27,    28,     0,
       0,    29,     0,     9,    54,     0,     0,    10,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,     0,    16,
      17,    18,    19,    20,    21,     0,     0,    22,    23,     3,
      73,    74,    24,    25,    75,    26,    27,    28,     0,     0,
      29,     0,    76,    54,     0,     0,    10,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,     0,    16,    17,
      18,    19,    20,    21,     0,     0,    22,    23,     0,     0,
       0,    24,    25,     0,    26,    27,    28,     0,     0,    29,
       3,    73,    74,     0,     0,    75,   269,     0,     0,     0,
       0,     0,     0,    76,     0,     0,     0,    10,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,     0,    16,
      17,    18,    19,    20,    21,     0,     0,    22,    23,     0,
       0,     0,    24,    25,     0,    26,    27,    28,     0,     0,
      29,     3,   240,   241,     0,     0,    75,     0,    46,     0,
       0,     0,     0,     0,    76,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,     0,
      16,    17,    18,    19,    20,    21,     0,     0,    22,    23,
       0,     0,     0,    24,    25,     0,    26,    27,    28,     0,
       0,    29,     3,    59,    60,     0,     0,    61,     0,    46,
       0,     0,     0,     0,     0,    62,     0,     0,     0,    63,
       0,     0,     0,     0,     0,    11,    12,    13,    14,    15,
       0,    16,    17,    18,    19,    20,    21,     0,     0,    22,
      23,     3,    52,    53,    24,     0,     6,    26,    27,    28,
       0,     0,    29,     0,     9,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,     0,
      16,    17,    18,    19,    20,    21,     0,     0,    22,    23,
       3,    73,    74,    24,    25,    75,    26,    27,    28,     0,
       0,    29,     0,    76,     0,     0,     0,    10,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,     0,    16,
      17,    18,    19,    20,    21,     0,     0,    22,    23,     3,
     132,   133,    24,    25,    61,    26,    27,    28,     0,     0,
      29,     0,    62,     0,     0,     0,    63,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,     0,    16,    17,
      18,    19,    20,    21,     0,     0,    22,    23,     3,   216,
     217,    24,     0,   218,    26,    27,    28,     0,   149,    29,
       0,   219,     0,     0,     0,    63,     0,     0,   150,   151,
       0,    11,    12,    13,    14,    15,     0,    16,    17,    18,
      19,    20,    21,     3,   216,    22,    23,     0,   218,     0,
      24,   155,   156,    26,    27,    28,     0,     0,    29,     0,
      63,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,     0,    16,    17,    18,    19,    20,    21,     3,    73,
      22,    23,     0,    75,     0,    24,     0,     0,    26,    27,
      28,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,    14,    15,     0,    16,    17,    18,
      19,    20,    21,     3,    73,    22,    23,     0,    75,     0,
      24,     0,     0,    26,    27,    28,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,    14,
      15,     0,    16,    17,    18,    19,    20,    21,     3,   132,
      22,    23,     0,    61,    97,    24,     0,     0,    26,    27,
      28,   169,     0,    29,    99,   100,   101,   102,   103,   104,
       0,    11,    12,     0,    14,    15,     0,    16,    17,    18,
      19,    20,    21,     0,     0,    22,    23,   105,   106,     0,
      24,     0,    85,    26,    27,    28,   138,     0,    29,     0,
       0,     0,   165,   166,    90,    91,    92,    93,   149,     0,
       0,     0,   138,     0,     0,    94,     0,     0,   263,   264,
     152,   153,   154,    93,   149,    95,    96,     0,     0,     0,
       0,    94,     0,     0,   150,   151,   152,   153,   154,    93,
      85,   155,   156,     0,     0,     0,     0,    94,     0,     0,
     165,   166,    90,    91,    92,    93,    85,   155,   156,     0,
       0,     0,     0,    94,     0,     0,    88,    89,    90,    91,
      92,    93,   149,    95,    96,     0,     0,     0,     0,    94,
       0,     0,   263,   264,   152,   153,   154,    93,     0,    95,
      96,     0,     0,     0,     0,    94,     0,    97,     0,   267,
       0,     0,     0,     0,     0,   155,   156,    99,   100,   101,
     102,   103,   104,    97,     0,     0,     0,     0,     0,     0,
     233,     0,     0,    99,   100,   101,   102,   103,   104,     0,
     105,   106,     0,     0,     0,     0,     0,     0,    97,     0,
     271,     0,     0,     0,     0,     0,   105,   106,    99,   100,
     101,   102,   103,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106
};

static const yytype_int16 yycheck[] =
{
       1,     7,    31,     6,     5,     6,     7,     1,     9,    10,
       5,     5,    19,     7,     5,    14,     5,     5,     7,    14,
       5,    24,    14,     5,    15,    16,    17,    18,    19,    20,
       4,    13,    14,    15,    16,    17,    18,    19,    20,     7,
      46,     4,    43,    44,    12,    46,    28,    38,    39,     5,
      38,    39,    53,    38,    39,    46,    38,    39,     6,    60,
      61,    62,    63,     6,    20,     5,    60,     7,     5,     5,
       7,     5,    28,    74,    75,    76,    24,     5,    79,     6,
       6,    24,    38,    39,    85,    86,     5,    88,    89,    90,
      91,    92,    86,    28,    95,    96,    97,    24,    99,   100,
     101,   102,   103,    50,   105,   106,   107,    52,   109,   110,
     111,   112,     5,   114,   115,   116,   117,   118,     6,    38,
      39,    14,    15,    16,    17,    18,    19,    20,    24,     6,
     124,    86,   133,    -1,   135,   136,    24,    -1,     6,    38,
      39,   142,    -1,     6,    -1,    38,    39,    24,   149,   150,
     151,   152,   153,   154,   155,   156,    24,   158,     5,    -1,
     161,    24,     9,     5,   165,   166,   160,     5,    15,    16,
      17,    18,    19,    20,    -1,     5,    -1,    15,    16,    38,
      39,    28,    20,    -1,    14,    15,    28,    17,    18,    -1,
      28,    38,    39,     5,     1,     7,    38,    39,     5,     6,
      38,    39,     9,     1,    -1,    17,    18,     5,     6,     5,
      -1,     9,    -1,     9,    -1,     5,   217,   218,   219,    15,
      16,    17,    18,    19,    20,    15,    16,    17,    18,    19,
      20,    -1,    28,    11,    12,   229,    43,   238,   239,   233,
     241,    28,    38,    39,     5,    -1,    53,   241,    38,    39,
      -1,    38,    39,    60,    61,    53,    17,    18,   259,    -1,
       5,    -1,   263,   264,     9,    11,    12,    74,    75,   270,
      15,    16,    17,    18,    19,    20,   277,    -1,    85,    86,
     274,    88,    89,    90,    91,     5,     4,     5,    86,     9,
      88,    89,    10,    38,    39,    15,    16,    17,    18,    19,
     107,    38,    39,   110,    -1,   112,    -1,   114,   115,   116,
     117,   118,     5,    -1,   112,    -1,   114,   115,   116,   117,
     118,    -1,    15,    -1,    17,    18,   133,     5,   135,   136,
      -1,     9,    -1,     0,    -1,   142,     3,     4,     5,    17,
      18,     8,   149,    10,    -1,   152,   153,    14,    -1,    16,
       4,     5,    -1,    20,   161,    -1,    10,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,    46,
      -1,    48,    49,    50,    -1,     1,    53,    54,     5,     5,
       6,    -1,    -1,     9,    10,     5,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    15,    16,    -1,    -1,    25,
     217,   218,   219,    29,    -1,     5,    -1,     7,    -1,   217,
     218,   219,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,   238,    -1,     5,   241,     7,    -1,    53,    54,    -1,
      -1,    -1,    -1,    15,     5,    17,    18,    -1,    38,    39,
      -1,    -1,   259,    -1,    15,    16,   263,   264,    74,    75,
      76,    -1,    -1,   270,    -1,   263,   264,    28,    -1,    85,
      86,    -1,    88,    89,    90,    91,    92,    38,    39,    95,
      96,    97,    -1,    99,   100,   101,   102,   103,    -1,   105,
     106,     3,     4,     5,    -1,    -1,     8,    -1,    10,    -1,
      -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    20,   125,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,   142,    -1,    40,    41,
      -1,    -1,    -1,    45,    46,     5,    48,    49,    50,    -1,
      -1,    53,    54,    -1,    -1,    15,    16,    -1,    -1,   165,
     166,    -1,    -1,   169,     3,     4,     5,    -1,     7,     8,
      -1,    10,     5,    -1,     7,    -1,    -1,    16,    38,    39,
      -1,    20,    15,    16,    17,    18,    19,    26,    27,    28,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,    -1,    -1,     5,    45,    46,    -1,    48,
      49,    50,    51,    -1,    53,    15,    16,     3,     4,     5,
      -1,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      16,    -1,   238,   239,    20,   241,    -1,    -1,    38,    39,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,   259,    40,    41,    -1,    -1,    -1,    45,
      46,    -1,    48,    49,    50,    -1,    -1,    53,     3,     4,
       5,    -1,     7,     8,     5,    10,    -1,    -1,     9,    -1,
      -1,    16,    -1,    -1,    15,    20,    17,    18,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,
      45,    46,    -1,    48,    49,    50,    -1,    -1,    53,     3,
       4,     5,    -1,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,    -1,    -1,
      -1,    45,    46,    -1,    48,    49,    50,    -1,    -1,    53,
       3,     4,     5,    -1,     7,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    -1,    -1,
      53,     3,     4,     5,    -1,    -1,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
       3,     4,     5,    45,    46,     8,    48,    49,    50,    -1,
      -1,    53,    -1,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,     3,
       4,     5,    45,    46,     8,    48,    49,    50,    -1,    -1,
      53,    -1,    16,    17,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,    -1,    -1,
      -1,    45,    46,    -1,    48,    49,    50,    -1,    -1,    53,
       3,     4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    -1,    -1,
      53,     3,     4,     5,    -1,    -1,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,    -1,
      -1,    53,     3,     4,     5,    -1,    -1,     8,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,     3,     4,     5,    45,    -1,     8,    48,    49,    50,
      -1,    -1,    53,    -1,    16,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
       3,     4,     5,    45,    46,     8,    48,    49,    50,    -1,
      -1,    53,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,     3,
       4,     5,    45,    46,     8,    48,    49,    50,    -1,    -1,
      53,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,     3,     4,
       5,    45,    -1,     8,    48,    49,    50,    -1,     5,    53,
      -1,    16,    -1,    -1,    -1,    20,    -1,    -1,    15,    16,
      -1,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,     3,     4,    40,    41,    -1,     8,    -1,
      45,    38,    39,    48,    49,    50,    -1,    -1,    53,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,     3,     4,
      40,    41,    -1,     8,    -1,    45,    -1,    -1,    48,    49,
      50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,     3,     4,    40,    41,    -1,     8,    -1,
      45,    -1,    -1,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,     3,     4,
      40,    41,    -1,     8,     5,    45,    -1,    -1,    48,    49,
      50,    12,    -1,    53,    15,    16,    17,    18,    19,    20,
      -1,    26,    27,    -1,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    41,    38,    39,    -1,
      45,    -1,     5,    48,    49,    50,     9,    -1,    53,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,     5,    -1,
      -1,    -1,     9,    -1,    -1,    28,    -1,    -1,    15,    16,
      17,    18,    19,    20,     5,    38,    39,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    15,    16,    17,    18,    19,    20,
       5,    38,    39,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      15,    16,    17,    18,    19,    20,     5,    38,    39,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    15,    16,    17,    18,
      19,    20,     5,    38,    39,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    15,    16,    17,    18,    19,    20,    -1,    38,
      39,    -1,    -1,    -1,    -1,    28,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    38,    39,    15,    16,    17,
      18,    19,    20,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    -1,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    38,    39,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,     0,     3,     4,     5,     8,    10,    14,    16,
      20,    26,    27,    28,    29,    30,    32,    33,    34,    35,
      36,    37,    40,    41,    45,    46,    48,    49,    50,    53,
      54,    58,    59,    60,    61,    62,    63,    64,    65,    67,
      69,    70,    31,     6,    24,     4,    10,    59,    61,    63,
      64,    67,     4,     5,    17,    59,    61,    63,    64,     4,
       5,     8,    16,    20,    59,    63,    66,    67,    68,    59,
      61,    63,    64,     4,     5,     8,    16,    59,    61,    19,
       4,    59,    61,     4,    61,     5,    13,    14,    15,    16,
      17,    18,    19,    20,    28,    38,    39,     5,    14,    15,
      16,    17,    18,    19,    20,    38,    39,     5,    14,    15,
      17,    18,     5,    14,    15,    16,    17,    18,    19,     5,
      14,    14,    14,     7,    50,    51,    59,    61,    63,    64,
      66,    67,     4,     5,    59,     6,     6,    61,     9,     9,
       9,     9,     6,    59,    63,    59,    63,    59,    59,     5,
      15,    16,    17,    18,    19,    38,    39,    11,    12,    11,
      12,     6,    59,    59,    59,    15,    16,    59,    46,    12,
      59,    61,    63,    58,    59,    61,    63,    64,    59,    61,
      63,    64,    59,    61,    63,    59,    61,    63,    59,    61,
      59,    61,    59,    61,    59,    61,    59,    61,    59,    61,
      59,    61,    59,    61,    59,    61,    59,    61,    59,    61,
      59,    63,    59,    59,    63,    59,     4,     5,     8,    16,
      59,    64,    64,    64,    64,    64,    59,    64,     4,     5,
      67,    61,     7,    12,     7,     7,     7,     7,     6,    17,
       4,     5,    59,    61,    63,    59,    59,    59,    59,    59,
      59,    59,    59,    59,     4,    67,    59,    59,    61,     6,
      59,    59,    59,    15,    16,     6,     7,     7,    67,     9,
       6,     7,    59,    59,    50,    52,     7,    24,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    67,    67,    67,    67,    68,    68,    69,
      70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     3,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     3,     4,     4,     6,
       2,     2,     3,     3,     3,     2,     3,     3,     3,     3,
       2,     3,     3,     5,     2,     3,     1,     2,     1,     4,
       2,     2,     3,     3,     3,     2,     3,     3,     3,     3,
       2,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       2,     4,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     2,     2,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     3,     1,     3,     2,     2,     5,     3,     1,     3,
       8
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 91 "ModParser.y" /* yacc.c:1646  */
    { YYABORT; }
#line 1747 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 92 "ModParser.y" /* yacc.c:1646  */
    { myDisplay(_n, (yyvsp[-1].num)); _n++; p = 0; memset(argsList, 0, sizeof(argsList)); YYACCEPT; }
#line 1753 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 93 "ModParser.y" /* yacc.c:1646  */
    {}
#line 1759 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 94 "ModParser.y" /* yacc.c:1646  */
    { fprintf(stderr, "\nOut[%d]:= %.10g I\n\n", _n, cimag((yyvsp[-1].comp))); _n++; YYACCEPT; }
#line 1765 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 95 "ModParser.y" /* yacc.c:1646  */
    { myComplexDisplay(_n, (yyvsp[-1].comp)); YYACCEPT; }
#line 1771 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 96 "ModParser.y" /* yacc.c:1646  */
    { fprintf(stderr, "\nOut[%d]:= %s\n\n", _n, (yyvsp[-1].string)); _n++; YYACCEPT; }
#line 1777 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 97 "ModParser.y" /* yacc.c:1646  */
    { myListDisplay(_n, L); _n++; p = 0; memset(L, 0, sizeof(L)); YYACCEPT; }
#line 1783 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 98 "ModParser.y" /* yacc.c:1646  */
    { myArrayDisplay(_n, M); _n++; p = 0; q=0; YYACCEPT; }
#line 1789 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 99 "ModParser.y" /* yacc.c:1646  */
    { fprintf(stderr, "\nOut[%d]:= 0\n\n", _n); _n++; YYACCEPT; }
#line 1795 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 100 "ModParser.y" /* yacc.c:1646  */
    { exit(0); }
#line 1801 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 104 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); _prev = (yyval.num); }
#line 1807 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 105 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); _prev = (yyval.num); }
#line 1813 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 106 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = myNullaryEval((yyvsp[-2].string)); _prev = (yyval.num); }
#line 1819 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 107 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = myEvaluate((yyvsp[-3].string), argsList); _prev = (yyval.num); }
#line 1825 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 108 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = myListToNum((yyvsp[-3].string), argsList); _prev = (yyval.num); }
#line 1831 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 109 "ModParser.y" /* yacc.c:1646  */
    {(yyval.num) = mySpecialEval((yyvsp[-5].string), (yyvsp[-3].string), argsList); _prev = (yyval.num); }
#line 1837 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 110 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); _prev = (yyval.num); }
#line 1843 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 111 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-1].num); _prev = (yyval.num); }
#line 1849 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 112 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-1].num); _prev = (yyval.num);}
#line 1855 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num) + (yyvsp[0].num); _prev = (yyval.num); }
#line 1861 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num) - (yyvsp[0].num); _prev = (yyval.num);}
#line 1867 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 115 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = -(yyvsp[0].num); _prev = (yyval.num);}
#line 1873 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 116 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num) * (yyvsp[0].num); _prev = (yyval.num);}
#line 1879 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 117 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num) * (yyvsp[0].num); _prev = (yyval.num); }
#line 1885 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 118 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num) / (yyvsp[0].num); _prev = (yyval.num);}
#line 1891 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 119 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = pow((yyvsp[-2].num), (yyvsp[0].num)); _prev = (yyval.num);}
#line 1897 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 120 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = tgamma((yyvsp[-1].num) + 1); _prev = (yyval.num); }
#line 1903 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 121 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num) && (yyvsp[0].num); _prev = (yyval.num); }
#line 1909 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 122 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-2].num) || (yyvsp[0].num); _prev = (yyval.num); }
#line 1915 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 123 "ModParser.y" /* yacc.c:1646  */
    { myGraphics((yyvsp[-3].string), (yyvsp[-1].string)); }
#line 1921 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 124 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = !((yyvsp[0].num)); _prev = (yyval.num); }
#line 1927 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 125 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = varValues[m] = (yyvsp[0].num); varNames[m] = (yyvsp[-2].string); m++; }
#line 1933 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 126 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); _prev = (yyval.num); }
#line 1939 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 130 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = mySearch((yyvsp[0].string), varNames, varValues); }
#line 1945 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 134 "ModParser.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1951 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 135 "ModParser.y" /* yacc.c:1646  */
    { char *a0; asprintf(&a0, "%s[%s]", (yyvsp[-3].string), (yyvsp[-1].string)); (yyval.string) = a0; }
#line 1957 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 136 "ModParser.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1963 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 137 "ModParser.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[-1].string); }
#line 1969 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 138 "ModParser.y" /* yacc.c:1646  */
    { char *a1; asprintf(&a1, "(%s)", (yyvsp[-1].string)); (yyval.string) = a1; }
#line 1975 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 139 "ModParser.y" /* yacc.c:1646  */
    { char *a2; asprintf(&a2, "%s+%s", (yyvsp[-2].string), (yyvsp[0].string)); (yyval.string) = a2; }
#line 1981 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 140 "ModParser.y" /* yacc.c:1646  */
    { char *a3; asprintf(&a3, "%s-%s", (yyvsp[-2].string), (yyvsp[0].string)); (yyval.string) = a3; }
#line 1987 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 141 "ModParser.y" /* yacc.c:1646  */
    { char *a4; asprintf(&a4, "-%s", (yyvsp[0].string)); (yyval.string) = a4; }
#line 1993 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 142 "ModParser.y" /* yacc.c:1646  */
    { char *a5; asprintf(&a5, "%s*%s", (yyvsp[-2].string), (yyvsp[0].string)); (yyval.string) = a5; }
#line 1999 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 143 "ModParser.y" /* yacc.c:1646  */
    { char *a6; asprintf(&a6, "%s %s", (yyvsp[-2].string), (yyvsp[0].string)); (yyval.string) = a6; }
#line 2005 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 144 "ModParser.y" /* yacc.c:1646  */
    { char *a7; asprintf(&a7, "%s/%s", (yyvsp[-2].string), (yyvsp[0].string)); (yyval.string) = a7; }
#line 2011 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 145 "ModParser.y" /* yacc.c:1646  */
    { char *a8; asprintf(&a8, "%s^%s", (yyvsp[-2].string), (yyvsp[0].string)); (yyval.string) = a8; }
#line 2017 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 146 "ModParser.y" /* yacc.c:1646  */
    { char *a9; asprintf(&a9, "%s!", (yyvsp[-1].string)); (yyval.string) = a9; }
#line 2023 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 147 "ModParser.y" /* yacc.c:1646  */
    { char *b0; asprintf(&b0, "%s && %s", (yyvsp[-2].string), (yyvsp[0].string)); (yyval.string) = b0; }
#line 2029 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 148 "ModParser.y" /* yacc.c:1646  */
    { char *b1; asprintf(&b1, "%s || %s", (yyvsp[-2].string), (yyvsp[0].string)); (yyval.string) = b1; }
#line 2035 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 149 "ModParser.y" /* yacc.c:1646  */
    { char *b2; asprintf(&b2, "!%s", (yyvsp[0].string)); (yyval.string) = b2; }
#line 2041 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 150 "ModParser.y" /* yacc.c:1646  */
    { char *b3; asprintf(&b3, "%.10g+%s", (yyvsp[-2].num), (yyvsp[0].string)); (yyval.string) = b3; }
#line 2047 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 151 "ModParser.y" /* yacc.c:1646  */
    { char *b4; asprintf(&b4, "%.10g-%s", (yyvsp[-2].num), (yyvsp[0].string)); (yyval.string) = b4; }
#line 2053 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 152 "ModParser.y" /* yacc.c:1646  */
    { char *b5; asprintf(&b5, "%.10g*%s", (yyvsp[-2].num), (yyvsp[0].string)); (yyval.string) = b5; }
#line 2059 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 153 "ModParser.y" /* yacc.c:1646  */
    { char *b6; asprintf(&b6, "%.10g %s", (yyvsp[-2].num), (yyvsp[0].string)); (yyval.string) = b6; }
#line 2065 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 154 "ModParser.y" /* yacc.c:1646  */
    { char *b7; asprintf(&b7, "%.10g/%s", (yyvsp[-2].num), (yyvsp[0].string)); (yyval.string) = b7; }
#line 2071 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 155 "ModParser.y" /* yacc.c:1646  */
    { char *b8; asprintf(&b8, "%.10g^%s", (yyvsp[-2].num), (yyvsp[0].string)); (yyval.string) = b8; }
#line 2077 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 156 "ModParser.y" /* yacc.c:1646  */
    { char *b9; asprintf(&b9, "%.10g && %s", (yyvsp[-2].num), (yyvsp[0].string)); (yyval.string) = b9; }
#line 2083 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 157 "ModParser.y" /* yacc.c:1646  */
    { char *c0; asprintf(&c0, "%.10g || %s", (yyvsp[-2].num), (yyvsp[0].string)); (yyval.string) = c0; }
#line 2089 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 158 "ModParser.y" /* yacc.c:1646  */
    { char *c1; asprintf(&c1, "%.10g+%s", (yyvsp[0].num), (yyvsp[-2].string)); (yyval.string) = c1; }
#line 2095 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 159 "ModParser.y" /* yacc.c:1646  */
    { char *c2; asprintf(&c2, "%s-%.10g", (yyvsp[-2].string), (yyvsp[0].num)); (yyval.string) = c2; }
#line 2101 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 160 "ModParser.y" /* yacc.c:1646  */
    { char *c3; asprintf(&c3, "%.10g*%s", (yyvsp[0].num), (yyvsp[-2].string)); (yyval.string) = c3; }
#line 2107 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 161 "ModParser.y" /* yacc.c:1646  */
    { char *c4; asprintf(&c4, "%.10g %s", (yyvsp[0].num), (yyvsp[-2].string)); (yyval.string) = c4; }
#line 2113 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 162 "ModParser.y" /* yacc.c:1646  */
    { char *c5; asprintf(&c5, "%s/%.10g", (yyvsp[-2].string), (yyvsp[0].num)); (yyval.string) = c5; }
#line 2119 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 163 "ModParser.y" /* yacc.c:1646  */
    { char *c6; asprintf(&c6, "%s^%.10g", (yyvsp[-2].string), (yyvsp[0].num)); (yyval.string) = c6; }
#line 2125 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 164 "ModParser.y" /* yacc.c:1646  */
    { char *c7; asprintf(&c7, "%s && %.10g", (yyvsp[-2].string), (yyvsp[0].num)); (yyval.string) = c7; }
#line 2131 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 165 "ModParser.y" /* yacc.c:1646  */
    { char *c8; asprintf(&c8, "%s || %.10g", (yyvsp[-2].string), (yyvsp[0].num)); (yyval.string) = c8; }
#line 2137 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 166 "ModParser.y" /* yacc.c:1646  */
    { YYACCEPT; }
#line 2143 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 167 "ModParser.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[-1].string); }
#line 2149 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 171 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 2155 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 172 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = M_PI; }
#line 2161 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 173 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = exp(1); }
#line 2167 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 174 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = _prev; }
#line 2173 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 175 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = myGlobalVars((yyvsp[0].string)); }
#line 2179 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 176 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (double) INFINITY; }
#line 2185 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 177 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (double) NAN; }
#line 2191 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 178 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = M_PI / 180; }
#line 2197 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 179 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[-1].num) * M_PI / 180; }
#line 2203 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 180 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (sqrt(5) + 1)/2; }
#line 2209 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 181 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = 0.57721566490153286060651209008240243104215933593992; }
#line 2215 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 182 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = 0.91596559417721901505460351493238411077414937428167;}
#line 2221 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 183 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = 2.6854520010653064453097148354817956938203822939945;}
#line 2227 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 184 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = 1.2824271291006226368753425688697917277676889273250;}
#line 2233 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 185 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = (3 - sqrt(5)) * M_PI; }
#line 2239 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 186 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = creal((yyvsp[-2].comp) * (yyvsp[0].comp)); }
#line 2245 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 187 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = creal((yyvsp[-2].comp) * (yyvsp[0].comp)); }
#line 2251 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 191 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = _Complex_I; }
#line 2257 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 192 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-1].num)*_Complex_I; }
#line 2263 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 193 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = myCompToNum((yyvsp[-3].string), (yyvsp[-1].comp)); }
#line 2269 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 194 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[0].comp); }
#line 2275 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 195 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-1].comp); }
#line 2281 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 196 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-1].comp); }
#line 2287 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 197 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].num) * (yyvsp[0].comp); }
#line 2293 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 198 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].comp) * (yyvsp[0].num); }
#line 2299 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 199 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].num) * (yyvsp[0].comp); }
#line 2305 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 200 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].comp) * (yyvsp[0].num); }
#line 2311 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 201 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].num) / (yyvsp[0].comp); }
#line 2317 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 202 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].comp) / (yyvsp[0].num); }
#line 2323 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 203 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = cpow(_Complex_I, (yyvsp[0].num)); }
#line 2329 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 207 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].num) + (yyvsp[0].comp); }
#line 2335 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 208 "ModParser.y" /* yacc.c:1646  */
    {(yyval.comp) = (yyvsp[0].num) + (yyvsp[-2].comp); }
#line 2341 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 209 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].num) - (yyvsp[0].comp); }
#line 2347 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 210 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = myCompToNum((yyvsp[-3].string), (yyvsp[-1].comp)); }
#line 2353 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 211 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-1].comp); }
#line 2359 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 212 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[0].comp); }
#line 2365 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 213 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-1].comp); }
#line 2371 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 214 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].comp) + (yyvsp[0].comp); }
#line 2377 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 215 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].comp) - (yyvsp[0].comp); }
#line 2383 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 216 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = -(yyvsp[0].comp); }
#line 2389 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 217 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].comp) * (yyvsp[0].comp); }
#line 2395 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 218 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].comp) * (yyvsp[0].comp); }
#line 2401 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 219 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].comp) / (yyvsp[0].comp); }
#line 2407 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 220 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = cpow((yyvsp[-2].comp), (yyvsp[0].comp)); }
#line 2413 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 221 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].num) + (yyvsp[0].comp); }
#line 2419 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 222 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = (yyvsp[-2].num) - (yyvsp[0].comp); }
#line 2425 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 223 "ModParser.y" /* yacc.c:1646  */
    { (yyval.comp) = cpow((yyvsp[-2].comp), (yyvsp[0].num)); }
#line 2431 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 227 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = true; }
#line 2437 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 228 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = false; }
#line 2443 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 232 "ModParser.y" /* yacc.c:1646  */
    { argsList[p] = (yyvsp[0].num); p++; }
#line 2449 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 233 "ModParser.y" /* yacc.c:1646  */
    { argsList[p] = (yyvsp[0].num); p++; }
#line 2455 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 237 "ModParser.y" /* yacc.c:1646  */
    { for (int i=0; i<10; i++) {L[i] = argsList[i]; } }
#line 2461 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 238 "ModParser.y" /* yacc.c:1646  */
    { (yyval.nums) = (yyvsp[0].nums); }
#line 2467 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 239 "ModParser.y" /* yacc.c:1646  */
    { (yyval.nums) = (yyvsp[-1].nums); }
#line 2473 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 240 "ModParser.y" /* yacc.c:1646  */
    { (yyval.nums) = myListEval((yyvsp[-4].string), (yyvsp[-1].nums)); }
#line 2479 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 244 "ModParser.y" /* yacc.c:1646  */
    { for (int i=0; i<10; i++) { argsArray[q][i] = L[i]; L[i] = 0; } memset(L, 0, sizeof(L)); q++; }
#line 2485 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 245 "ModParser.y" /* yacc.c:1646  */
    { for (int i=0; i<10; i++) { argsArray[q][i] = L[i]; L[i] = 0; } memset(L, 0, sizeof(L)); q++; }
#line 2491 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 249 "ModParser.y" /* yacc.c:1646  */
    { for (int i=0; i<10; i++) { for (int j=0; j<10; j++) { M[i][j] = argsArray[i][j]; } } }
#line 2497 "ModParser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 253 "ModParser.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 2503 "ModParser.tab.c" /* yacc.c:1646  */
    break;


#line 2507 "ModParser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 256 "ModParser.y" /* yacc.c:1906  */


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
