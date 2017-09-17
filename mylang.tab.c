/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     FOR = 260,
     COLON = 261,
     CONT = 262,
     RET = 263,
     BREAK = 264,
     TRU = 265,
     FALS = 266,
     NUL = 267,
     QUE = 268,
     NEW = 269,
     DEL = 270,
     ID = 271,
     INT = 272,
     DOUBLE = 273,
     CHAR = 274,
     STRING = 275,
     CHARDEC = 276,
     BOOLDEC = 277,
     DOUBDEC = 278,
     VOIDDEC = 279,
     INTDEC = 280,
     LARR = 281,
     RARR = 282,
     LPAR = 283,
     RPAR = 284,
     LCURL = 285,
     RCURL = 286,
     SEMICOL = 287,
     COMMA = 288,
     SUB_ASSIGN = 289,
     ADD_ASSIGN = 290,
     MOD_ASSIGN = 291,
     DIV_ASSIGN = 292,
     MUL_ASSIGN = 293,
     ASSIGN = 294,
     OR = 295,
     AND = 296,
     BIN_AND = 297,
     NOT_EQ = 298,
     EQ = 299,
     GT_EQ = 300,
     LT_EQ = 301,
     GT = 302,
     LT = 303,
     MINUS = 304,
     PLUS = 305,
     MOD = 306,
     DIV = 307,
     MUL = 308,
     BYREF = 309,
     NOT = 310,
     DEC_OP = 311,
     INC_OP = 312
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define COLON 261
#define CONT 262
#define RET 263
#define BREAK 264
#define TRU 265
#define FALS 266
#define NUL 267
#define QUE 268
#define NEW 269
#define DEL 270
#define ID 271
#define INT 272
#define DOUBLE 273
#define CHAR 274
#define STRING 275
#define CHARDEC 276
#define BOOLDEC 277
#define DOUBDEC 278
#define VOIDDEC 279
#define INTDEC 280
#define LARR 281
#define RARR 282
#define LPAR 283
#define RPAR 284
#define LCURL 285
#define RCURL 286
#define SEMICOL 287
#define COMMA 288
#define SUB_ASSIGN 289
#define ADD_ASSIGN 290
#define MOD_ASSIGN 291
#define DIV_ASSIGN 292
#define MUL_ASSIGN 293
#define ASSIGN 294
#define OR 295
#define AND 296
#define BIN_AND 297
#define NOT_EQ 298
#define EQ 299
#define GT_EQ 300
#define LT_EQ 301
#define GT 302
#define LT 303
#define MINUS 304
#define PLUS 305
#define MOD 306
#define DIV 307
#define MUL 308
#define BYREF 309
#define NOT 310
#define DEC_OP 311
#define INC_OP 312




/* Copy the first part of user declarations.  */
#line 2 "mylang.y"
 /* C declarations used in actions */
 #include <stdio.h>
 #define YYDEBUG 1


extern int yylex();
extern int yyparse();
extern FILE *yyin;

int line;
extern int line;
extern char* yytext;
int errors;
int errorIndex;

struct errorData
{
   int line;
   char errorMsg[50];
};

struct errorData *ptr;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 245 "mylang.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2865

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  256

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      59,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    58,     2,     2,     2,     2,     2,
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
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    16,    18,    20,
      22,    25,    29,    34,    38,    40,    44,    47,    48,    51,
      54,    56,    58,    60,    62,    64,    67,    69,    74,    77,
      83,    88,    92,    94,    98,   101,   105,   108,   111,   121,
     130,   134,   137,   138,   141,   143,   146,   150,   158,   164,
     176,   187,   198,   208,   219,   229,   239,   248,   258,   267,
     276,   284,   293,   301,   309,   316,   320,   323,   327,   330,
     334,   337,   340,   343,   344,   347,   349,   353,   355,   357,
     359,   361,   363,   365,   367,   370,   374,   378,   383,   388,
     391,   395,   398,   401,   405,   410,   416,   422,   425,   428,
     431,   433,   437,   441,   443,   447,   449,   451,   453,   455,
     457,   460,   462,   464,   466,   468,   470,   472,   474,   476,
     478,   480,   482,   484,   486,   489,   491,   493,   496,   498,
     500,   502,   504,   506,   508
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    62,    -1,     1,    32,    -1,    63,    -1,
      63,    62,    -1,     1,    32,    -1,    64,    -1,    69,    -1,
      72,    -1,     1,    32,    -1,    67,    65,    32,    -1,    67,
      66,    65,    32,    -1,    64,     1,    32,    -1,    68,    -1,
      65,    33,    68,    -1,     1,    32,    -1,    -1,    66,    53,
      -1,     1,    32,    -1,    25,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,     1,    32,    -1,    16,    -1,    16,
      26,    78,    27,    -1,     1,    32,    -1,    67,    16,    28,
      70,    29,    -1,    67,    16,    28,    29,    -1,    69,     1,
      32,    -1,    71,    -1,    70,    33,    71,    -1,     1,    32,
      -1,    54,    67,    16,    -1,    67,    16,    -1,     1,    32,
      -1,    67,    16,    28,    70,    29,    30,    73,    75,    31,
      -1,    67,    16,    28,    29,    30,    73,    75,    31,    -1,
      72,     1,    32,    -1,    73,    63,    -1,    -1,     1,    32,
      -1,    32,    -1,    76,    32,    -1,    30,    75,    31,    -1,
       3,    28,    76,    29,    74,     4,    74,    -1,     3,    28,
      76,    29,    74,    -1,    16,     6,     5,    28,    76,    32,
      76,    32,    76,    29,    74,    -1,    16,     6,     5,    28,
      76,    32,    76,    32,    29,    74,    -1,    16,     6,     5,
      28,    76,    32,    32,    76,    29,    74,    -1,    16,     6,
       5,    28,    76,    32,    32,    29,    74,    -1,    16,     6,
       5,    28,    32,    76,    32,    76,    29,    74,    -1,    16,
       6,     5,    28,    32,    76,    32,    29,    74,    -1,    16,
       6,     5,    28,    32,    32,    76,    29,    74,    -1,    16,
       6,     5,    28,    32,    32,    29,    74,    -1,     5,    28,
      76,    32,    76,    32,    76,    29,    74,    -1,     5,    28,
      76,    32,    76,    32,    29,    74,    -1,     5,    28,    76,
      32,    32,    76,    29,    74,    -1,     5,    28,    76,    32,
      32,    29,    74,    -1,     5,    28,    32,    76,    32,    76,
      29,    74,    -1,     5,    28,    32,    76,    32,    29,    74,
      -1,     5,    28,    32,    32,    76,    29,    74,    -1,     5,
      28,    32,    32,    29,    74,    -1,     7,    16,    32,    -1,
       7,    32,    -1,     9,    16,    32,    -1,     9,    32,    -1,
       8,    76,    32,    -1,     8,    32,    -1,     1,    32,    -1,
      75,    74,    -1,    -1,     1,    32,    -1,    16,    -1,    28,
      76,    29,    -1,    10,    -1,    11,    -1,    12,    -1,    17,
      -1,    19,    -1,    18,    -1,    20,    -1,    28,    29,    -1,
      16,    28,    29,    -1,    28,    77,    29,    -1,    16,    28,
      77,    29,    -1,    76,    26,    76,    27,    -1,    79,    76,
      -1,    76,    80,    76,    -1,    81,    76,    -1,    76,    81,
      -1,    76,    82,    76,    -1,    28,    67,    29,    76,    -1,
      76,    13,    76,     6,    76,    -1,    14,    67,    26,    76,
      27,    -1,    14,    67,    -1,    15,    76,    -1,     1,    32,
      -1,    76,    -1,    77,    58,    76,    -1,    77,     1,    32,
      -1,    76,    -1,    78,     1,    32,    -1,    42,    -1,    53,
      -1,    50,    -1,    49,    -1,    55,    -1,     1,    32,    -1,
      53,    -1,    52,    -1,    51,    -1,    50,    -1,    49,    -1,
      48,    -1,    47,    -1,    46,    -1,    45,    -1,    44,    -1,
      43,    -1,    41,    -1,    40,    -1,     1,    32,    -1,    57,
      -1,    56,    -1,     1,    32,    -1,    39,    -1,    38,    -1,
      37,    -1,    36,    -1,    35,    -1,    34,    -1,    82,     1,
      59,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    50,    55,    56,    57,    61,    62,    63,
      64,    69,    70,    71,    77,    78,    79,    83,    85,    86,
      91,    92,    93,    94,    95,    96,   101,   102,   103,   108,
     109,   110,   114,   115,   116,   120,   121,   122,   127,   128,
     129,   134,   135,   136,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   172,   173,   174,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     206,   207,   208,   212,   213,   218,   219,   220,   221,   222,
     223,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   244,   245,   246,   250,   251,
     252,   253,   254,   255,   256
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "COLON", "CONT",
  "RET", "BREAK", "TRU", "FALS", "NUL", "QUE", "NEW", "DEL", "ID", "INT",
  "DOUBLE", "CHAR", "STRING", "CHARDEC", "BOOLDEC", "DOUBDEC", "VOIDDEC",
  "INTDEC", "LARR", "RARR", "LPAR", "RPAR", "LCURL", "RCURL", "SEMICOL",
  "COMMA", "SUB_ASSIGN", "ADD_ASSIGN", "MOD_ASSIGN", "DIV_ASSIGN",
  "MUL_ASSIGN", "ASSIGN", "OR", "AND", "BIN_AND", "NOT_EQ", "EQ", "GT_EQ",
  "LT_EQ", "GT", "LT", "MINUS", "PLUS", "MOD", "DIV", "MUL", "BYREF",
  "NOT", "DEC_OP", "INC_OP", "','", "'\\n'", "$accept", "program",
  "dec_list", "dec", "var_dec", "declarative_list", "stars",
  "basic_data_type", "declarative", "func_dec", "parameter_list",
  "parameter", "func_def", "declare_list", "statement", "statement_list",
  "expr", "expr_list", "const_expr", "un_op", "bin_op", "un_assgn_op",
  "bin_assgn_op", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,    44,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    62,    63,    63,    63,
      63,    64,    64,    64,    65,    65,    65,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    69,
      69,    69,    70,    70,    70,    71,    71,    71,    72,    72,
      72,    73,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     1,     1,
       2,     3,     4,     3,     1,     3,     2,     0,     2,     2,
       1,     1,     1,     1,     1,     2,     1,     4,     2,     5,
       4,     3,     1,     3,     2,     3,     2,     2,     9,     8,
       3,     2,     0,     2,     1,     2,     3,     7,     5,    11,
      10,    10,     9,    10,     9,     9,     8,     9,     8,     8,
       7,     8,     7,     7,     6,     3,     2,     3,     2,     3,
       2,     2,     2,     0,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     3,     4,     4,     2,
       3,     2,     2,     3,     4,     5,     5,     2,     2,     2,
       1,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    21,    22,    23,    24,    20,     0,     2,     0,
       0,     0,     0,     0,    10,     1,     0,     5,     0,     0,
      26,     0,     0,    14,     0,     0,    10,    13,    19,     0,
       0,    11,     0,     0,    26,    18,     0,    31,    40,     0,
      77,    78,    79,     0,     0,    75,    80,    82,    81,    83,
       0,   105,   108,   107,   106,   109,   126,   125,     0,     0,
       0,     0,     0,    30,     0,     0,     0,    32,     0,    15,
      16,    12,    99,     0,    97,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,   133,   132,   131,   130,   129,
     128,   123,   122,   121,   120,   119,   118,   117,   116,   115,
     114,   113,   112,   111,     0,    92,     0,     0,    27,     0,
       0,    34,     0,     0,    36,    29,     0,    28,    25,     0,
      85,     0,     0,    99,     0,    76,     0,    86,     0,   127,
       0,     0,     0,     0,     0,   104,     0,     0,    35,     0,
       0,    33,     0,    87,     0,   102,     0,     0,    88,   134,
      43,     0,    41,     0,     0,    37,    96,     0,    10,     0,
       0,     0,     0,     0,     0,    75,     0,    39,    44,    72,
       0,     0,    71,     0,     0,     0,    66,    70,     0,     0,
      68,     0,     0,     0,    45,    38,     0,     0,     0,    65,
      69,    67,     0,    74,    46,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      63,    62,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    59,    58,     0,    56,     0,     0,     0,
       0,     0,     0,    57,    55,    54,     0,    52,     0,     0,
       0,    53,    51,    50,     0,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    21,    22,    11,    23,    12,
      66,    67,    13,   137,   169,   153,   170,    81,    59,    60,
     104,    61,   106
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -145
static const yytype_int16 yypact[] =
{
      91,    12,  -145,  -145,  -145,  -145,  -145,    35,  -145,   202,
     287,     3,   345,   403,     8,  -145,    33,  -145,    44,    47,
      42,   -20,    10,  -145,    52,    53,     9,  -145,    20,  2682,
      17,  -145,     6,    54,    23,  -145,    40,  -145,  -145,    55,
    -145,  -145,  -145,   187,  2682,    46,  -145,  -145,  -145,  -145,
    1326,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  1351,    16,
    2682,  2682,    56,    67,   187,    66,   -19,  -145,    69,  -145,
    -145,  -145,  2800,    71,    72,   435,  2032,    74,  -145,    78,
     794,     0,    77,  2682,  2682,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  2682,  -145,  2732,    79,  -145,   488,
     541,   101,   934,   103,  -145,    96,    99,  -145,  -145,  2682,
    -145,   835,     1,   121,  2682,  -145,    95,  -145,  2682,  2752,
    1404,  1445,   594,   -26,   647,  -145,    97,   991,  -145,   934,
     110,  -145,  1486,  -145,   700,  -145,   876,  2682,  -145,  -145,
    -145,   111,  -145,  1048,   991,   101,  -145,   753,  -145,   114,
     100,   119,     4,  2052,    18,    -1,  1105,  -145,  -145,  -145,
    1515,  1162,  2813,  2682,  2102,   116,  -145,  -145,  1544,   120,
    -145,   146,   122,  1219,  -145,  -145,  1573,  2152,  1602,  -145,
    -145,  -145,   127,  -145,  -145,  1276,  2202,  1631,  2222,  2272,
     152,  1276,  1660,  2322,  2372,  1689,  2392,  1718,  1276,  -145,
    1276,  1276,  1747,  1276,  1776,  2442,  2492,  1805,  2512,  -145,
    -145,  -145,  1276,  -145,  1276,  1276,  1834,  1276,  1863,  2562,
    2612,  1892,  -145,  -145,  -145,  1276,  -145,  1276,  1276,  1921,
    1276,  1950,  2662,  -145,  -145,  -145,  1276,  -145,  1276,  1276,
    1979,  -145,  -145,  -145,  1276,  -145
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,   148,  -109,  -145,   139,  -145,   -27,   130,  -145,
    -145,    48,  -145,    26,  -144,  -106,   -29,    90,  -145,  -145,
    -145,    50,  -145
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -125
static const yytype_int16 yytable[] =
{
      58,   126,   126,    65,    19,   181,    72,    68,    -3,    -6,
     115,    33,    31,    32,   116,    75,    74,   107,    62,    20,
     175,    80,    34,    79,   -25,   -25,    34,    76,   152,   127,
     143,   109,   110,   149,   179,    15,   176,   113,     2,     3,
       4,     5,     6,   108,    14,   152,    63,   121,   171,    29,
     180,   200,   -16,   -16,   130,   131,   -17,   209,   128,   128,
     183,   -25,   -25,    35,   219,    26,   220,   221,    29,   223,
      30,    64,    71,    32,    76,   132,    27,   134,   232,    28,
     233,   234,   114,   236,    37,    38,    70,    72,   111,    65,
     142,   243,     1,   244,   245,   144,   247,   112,   119,   146,
     140,   117,   251,   118,   252,   253,   123,   124,   105,   129,
     255,   135,     2,     3,     4,     5,     6,   -25,   157,   138,
       2,     3,     4,     5,     6,   105,   139,   145,   173,   150,
     105,  -110,  -110,  -110,   178,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,   155,   158,   186,   188,   172,   174,   189,  -110,
     -25,   192,   191,    64,   193,   199,   208,    17,   197,   105,
     105,    36,    69,  -110,   141,   154,   122,   202,     0,   205,
     207,   105,     0,     0,   212,   214,  -110,   217,     0,     0,
     105,   105,   105,     0,   105,     0,   226,   228,    73,   231,
       0,     0,   105,     0,   105,     0,   105,     0,     0,     0,
     239,   241,    -4,    16,     0,     0,     0,   105,     2,     3,
       4,     5,     6,   250,     0,     0,     0,     0,     0,     0,
     105,     0,     0,     2,     3,     4,     5,     6,   105,     0,
       0,     0,     0,     0,     0,     0,   105,     0,   105,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     0,     0,
       0,     0,   105,     0,     0,   105,     0,   105,     0,     0,
       0,     0,   105,     0,   105,     0,     0,   105,     0,     0,
       0,     0,     0,     0,     0,     0,   105,     0,   105,     0,
       0,   105,     0,     0,     0,     0,     0,    -7,    18,   105,
      -7,   105,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,
     105,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,     0,    -7,     0,    -7,    -7,    -7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -7,
       0,     0,     0,     0,     0,     0,    -7,    -7,     0,     0,
      -7,     0,    -7,    -7,    -7,    -8,    24,     0,    -8,     0,
      -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,     0,     0,    -8,     0,    -8,    -8,    -8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -8,     0,     0,
       0,     0,     0,     0,    -8,    -8,     0,     0,    -8,     0,
      -8,    -8,    -8,    -9,    25,     0,    -9,     0,    -9,     0,
      -9,    -9,    -9,    -9,    -9,    -9,     0,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,
       0,    -9,     0,    -9,    -9,    -9,    82,     0,     0,     0,
       0,   -98,     0,     0,     0,    -9,     0,     0,    83,     0,
       0,     0,    -9,    -9,     0,     0,    -9,     0,    -9,    -9,
      -9,    84,   -98,     0,   -98,     0,     0,   -98,     0,    85,
      86,    87,    88,    89,    90,    91,    92,     0,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    82,
       0,    56,    57,   -98,   -89,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,   -89,     0,   -89,     0,     0,
     -89,     0,    85,    86,    87,    88,    89,    90,    91,    92,
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    82,     0,    56,    57,   -89,   -91,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,   -91,     0,
     -91,     0,     0,   -91,     0,    85,    86,    87,    88,    89,
      90,    91,    92,     0,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    82,     0,    56,    57,   -91,
     -90,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,   -90,     0,   -90,     0,     0,   -90,     0,    85,    86,
      87,    88,    89,    90,    91,    92,     0,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    82,     0,
      56,    57,   -90,   -93,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,   -93,     0,   -93,     0,     0,   -93,
       0,    85,    86,    87,    88,    89,    90,    91,    92,     0,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    82,     0,    56,    57,   -93,   -94,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,   -94,     0,   -94,
       0,     0,   -94,     0,    85,    86,    87,    88,    89,    90,
      91,    92,     0,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    82,     0,    56,    57,   -94,   -95,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
     -95,     0,   -95,     0,     0,   -95,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    82,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    83,     0,    56,
      57,   -95,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,   125,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    82,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    83,     0,
      56,    57,  -100,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,  -100,     0,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    82,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    83,
       0,    56,    57,  -100,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,  -101,     0,     0,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,     0,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,     0,    56,    57,  -101,   136,     0,   -42,     0,   -42,
       0,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,   -42,     0,   -42,   -42,   -42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -42,     0,     0,     0,
       0,     0,     0,   -42,   -42,     0,     0,   -42,     0,   -42,
     -42,   -42,   151,     0,   -73,     0,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     2,     3,     4,     5,     6,     0,     0,   -73,
       0,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -73,     0,     0,     0,     0,     0,     0,
     -73,   -73,     0,     0,   -73,     0,   -73,   -73,   -73,   159,
       0,   160,     0,   161,     0,   162,   163,   164,    40,    41,
      42,     0,    43,    44,   165,    46,    47,    48,    49,     0,
       0,     0,     0,     0,     0,     0,    50,     0,   166,   167,
     168,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,    52,    53,     0,
       0,    54,     0,    55,    56,    57,   182,     0,   -73,     0,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,   -73,     0,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -73,     0,     0,
       0,     0,     0,     0,   -73,   -73,     0,     0,   -73,     0,
     -73,   -73,   -73,   159,     0,   160,     0,   161,     0,   162,
     163,   164,    40,    41,    42,     0,    43,    44,   165,    46,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
      50,     0,   166,   185,   168,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,     0,     0,    54,     0,    55,    56,    57,
     159,     0,   160,     0,   161,     0,   162,   163,   164,    40,
      41,    42,     0,    43,    44,   165,    46,    47,    48,    49,
       0,     0,     0,     0,     0,     0,     0,    50,     0,   166,
     194,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,    52,    53,
       0,     0,    54,     0,    55,    56,    57,   159,     0,   160,
       0,   161,     0,   162,   163,   164,    40,    41,    42,     0,
      43,    44,   165,    46,    47,    48,    49,     0,     0,     0,
       0,     0,     0,     0,    50,     0,   166,     0,   168,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,     0,    52,    53,    77,     0,    54,
       0,    55,    56,    57,     0,     0,    40,    41,    42,     0,
      43,    44,    45,    46,    47,    48,    49,     2,     3,     4,
       5,     6,    82,     0,    50,    78,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,    51,     0,
       0,     0,     0,     0,     0,    52,    53,    84,  -103,    54,
       0,    55,    56,    57,     0,    85,    86,    87,    88,    89,
      90,    91,    92,     0,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    82,     0,    56,    57,     0,
     147,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    82,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    83,     0,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,   148,     0,     0,     0,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    82,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    83,
       0,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,   156,     0,     0,    82,     0,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,    83,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,    84,    56,    57,     0,    82,     0,   184,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    83,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
      84,    56,    57,     0,    82,     0,   190,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    83,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,    84,
      56,    57,   195,    82,     0,     0,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    83,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,    84,    56,
      57,     0,    82,     0,   198,     0,    85,    86,    87,    88,
      89,    90,    91,    92,    83,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,    84,    56,    57,
       0,    82,     0,   203,     0,    85,    86,    87,    88,    89,
      90,    91,    92,    83,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,    84,    56,    57,   210,
      82,     0,     0,     0,    85,    86,    87,    88,    89,    90,
      91,    92,    83,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,    84,    56,    57,     0,    82,
       0,   215,     0,    85,    86,    87,    88,    89,    90,    91,
      92,    83,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,     0,    84,    56,    57,     0,    82,     0,
     218,     0,    85,    86,    87,    88,    89,    90,    91,    92,
      83,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,    84,    56,    57,   222,    82,     0,     0,
       0,    85,    86,    87,    88,    89,    90,    91,    92,    83,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,    84,    56,    57,   224,    82,     0,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,    83,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,    84,    56,    57,     0,    82,     0,   229,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    83,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
      84,    56,    57,   235,    82,     0,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    83,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,    84,
      56,    57,   237,    82,     0,     0,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    83,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,    84,    56,
      57,     0,    82,     0,   242,     0,    85,    86,    87,    88,
      89,    90,    91,    92,    83,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,    84,    56,    57,
     246,    82,     0,     0,     0,    85,    86,    87,    88,    89,
      90,    91,    92,    83,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,    84,    56,    57,   248,
      82,     0,     0,     0,    85,    86,    87,    88,    89,    90,
      91,    92,    83,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,    84,    56,    57,   254,     0,
       0,     0,     0,    85,    86,    87,    88,    89,    90,    91,
      92,     0,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    39,     0,    56,    57,     0,     0,     0,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,    39,     0,     0,     0,     0,     0,     0,
      50,   120,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    51,     0,     0,     0,     0,     0,
      50,    52,    53,     0,   177,    54,     0,    55,    56,    57,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    39,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,   187,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    39,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,   196,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    39,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,    39,     0,     0,     0,     0,     0,     0,
      50,   201,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    51,     0,     0,     0,     0,     0,
      50,    52,    53,     0,   204,    54,     0,    55,    56,    57,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    39,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    39,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
      50,   211,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    39,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,    39,     0,     0,     0,     0,     0,     0,
      50,   213,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    51,     0,     0,     0,     0,     0,
      50,    52,    53,     0,   216,    54,     0,    55,    56,    57,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    39,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
      50,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    39,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,    39,     0,     0,     0,     0,     0,     0,
      50,   227,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    51,     0,     0,     0,     0,     0,
      50,    52,    53,     0,   230,    54,     0,    55,    56,    57,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    39,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
      50,   238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    39,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
      50,   240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    39,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,    39,     0,     0,     0,     0,     0,     0,
      50,   249,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    51,     0,     0,     0,     0,     0,
      50,    52,    53,     0,     0,    54,     0,    55,    56,    57,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    52,    53,   133,     0,    54,     0,    55,    56,    57,
       0,     0,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,  -124,     0,     0,     0,     0,     0,     0,
      50,     0,  -124,  -124,  -124,     0,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,     0,    51,     0,     0,     0,     0,     0,
    -124,    52,    53,     0,     0,    54,     0,    55,    56,    57,
       0,     0,     0,     0,  -124,     0,     0,     0,     0,     0,
       0,  -124,  -124,     0,     0,  -124,     0,  -124,  -124,  -124,
    -110,  -110,  -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,     0,     0,     0,     0,     0,   -99,     0,  -110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -99,
       0,     0,  -110,     0,     0,     0,     0,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,  -110,   -99,   -99,   -99,   -99,
     -99,   -99,     0,     0,   -99,   -99
};

static const yytype_int16 yycheck[] =
{
      29,     1,     1,    30,     1,     6,    32,     1,     0,     0,
      29,     1,    32,    33,    33,    44,    43,     1,     1,    16,
      16,    50,    16,    50,    16,    16,    16,    28,   137,    29,
      29,    60,    61,    59,    16,     0,    32,    64,    21,    22,
      23,    24,    25,    27,    32,   154,    29,    76,   154,    26,
      32,   195,    32,    33,    83,    84,    53,   201,    58,    58,
     166,    53,    53,    53,   208,    32,   210,   211,    26,   213,
      28,    54,    32,    33,    28,   104,    32,   106,   222,    32,
     224,   225,    16,   227,    32,    32,    32,    32,    32,   116,
     119,   235,     1,   237,   238,   124,   240,    30,    26,   128,
       1,    32,   246,    32,   248,   249,    32,    29,    58,    32,
     254,    32,    21,    22,    23,    24,    25,    16,   147,    16,
      21,    22,    23,    24,    25,    75,    30,    32,    28,    32,
      80,    10,    11,    12,   163,    14,    15,    16,    17,    18,
      19,    20,    32,    32,   173,   174,    32,    28,    32,    28,
      29,     5,    32,    54,    32,    28,     4,     9,   187,   109,
     110,    22,    32,    42,   116,   139,    76,   196,    -1,   198,
     199,   121,    -1,    -1,   203,   204,    55,   206,    -1,    -1,
     130,   131,   132,    -1,   134,    -1,   215,   216,     1,   218,
      -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,    -1,
     229,   230,     0,     1,    -1,    -1,    -1,   157,    21,    22,
      23,    24,    25,   242,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    21,    22,    23,    24,    25,   178,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,   188,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    -1,   202,    -1,    -1,   205,    -1,   207,    -1,    -1,
      -1,    -1,   212,    -1,   214,    -1,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,   228,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,     0,     1,   239,
       3,   241,     5,    -1,     7,     8,     9,    10,    11,    12,
     250,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      53,    -1,    55,    56,    57,     0,     1,    -1,     3,    -1,
       5,    -1,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,
      55,    56,    57,     0,     1,    -1,     3,    -1,     5,    -1,
       7,     8,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    31,    32,     1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    42,    -1,    -1,    13,    -1,
      -1,    -1,    49,    50,    -1,    -1,    53,    -1,    55,    56,
      57,    26,    27,    -1,    29,    -1,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     1,
      -1,    56,    57,    58,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    29,    -1,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     1,    -1,    56,    57,    58,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      29,    -1,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     1,    -1,    56,    57,    58,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    29,    -1,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     1,    -1,
      56,    57,    58,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    29,    -1,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     1,    -1,    56,    57,    58,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    29,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     1,    -1,    56,    57,    58,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    29,    -1,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,     1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    13,    -1,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,     1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    13,    -1,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,     1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    13,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    56,    57,    58,     1,    -1,     3,    -1,     5,
      -1,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,    55,
      56,    57,     1,    -1,     3,    -1,     5,    -1,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,     1,
      -1,     3,    -1,     5,    -1,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    53,    -1,    55,    56,    57,     1,    -1,     3,    -1,
       5,    -1,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,
      55,    56,    57,     1,    -1,     3,    -1,     5,    -1,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,    -1,    55,    56,    57,
       1,    -1,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    53,    -1,    55,    56,    57,     1,    -1,     3,
      -1,     5,    -1,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,     1,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    26,    27,    53,
      -1,    55,    56,    57,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     1,    -1,    56,    57,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,     1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    13,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,     1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    13,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,     1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    13,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    26,    56,    57,    -1,     1,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    13,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      26,    56,    57,    -1,     1,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    13,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    26,
      56,    57,    29,     1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    13,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    26,    56,
      57,    -1,     1,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    13,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    26,    56,    57,
      -1,     1,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    13,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    26,    56,    57,    29,
       1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    13,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    26,    56,    57,    -1,     1,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    13,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    26,    56,    57,    -1,     1,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      13,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    26,    56,    57,    29,     1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    13,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    26,    56,    57,    29,     1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    13,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    26,    56,    57,    -1,     1,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    13,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      26,    56,    57,    29,     1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    13,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    26,
      56,    57,    29,     1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    13,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    26,    56,
      57,    -1,     1,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    13,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    26,    56,    57,
      29,     1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    13,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    26,    56,    57,    29,
       1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    13,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    26,    56,    57,    29,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      28,    49,    50,    -1,    32,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      28,    49,    50,    -1,    32,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      28,    49,    50,    -1,    32,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      28,    49,    50,    -1,    32,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      28,    49,    50,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      28,    49,    50,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,    -1,    55,    56,    57,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    13,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    55,    43,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    21,    22,    23,    24,    25,    61,    62,    63,
      64,    67,    69,    72,    32,     0,     1,    62,     1,     1,
      16,    65,    66,    68,     1,     1,    32,    32,    32,    26,
      28,    32,    33,     1,    16,    53,    65,    32,    32,     1,
      10,    11,    12,    14,    15,    16,    17,    18,    19,    20,
      28,    42,    49,    50,    53,    55,    56,    57,    76,    78,
      79,    81,     1,    29,    54,    67,    70,    71,     1,    68,
      32,    32,    32,     1,    67,    76,    28,     1,    29,    67,
      76,    77,     1,    13,    26,    34,    35,    36,    37,    38,
      39,    40,    41,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    80,    81,    82,     1,    27,    76,
      76,    32,    30,    67,    16,    29,    33,    32,    32,    26,
      29,    76,    77,    32,    29,    29,     1,    29,    58,    32,
      76,    76,    76,     1,    76,    32,     1,    73,    16,    30,
       1,    71,    76,    29,    76,    32,    76,     6,    27,    59,
      32,     1,    63,    75,    73,    32,    27,    76,    32,     1,
       3,     5,     7,     8,     9,    16,    30,    31,    32,    74,
      76,    75,    32,    28,    28,    16,    32,    32,    76,    16,
      32,     6,     1,    75,    32,    31,    76,    32,    76,    32,
      32,    32,     5,    32,    31,    29,    32,    76,    32,    28,
      74,    29,    76,    32,    32,    76,    32,    76,     4,    74,
      29,    29,    76,    29,    76,    32,    32,    76,    32,    74,
      74,    74,    29,    74,    29,    29,    76,    29,    76,    32,
      32,    76,    74,    74,    74,    29,    74,    29,    29,    76,
      29,    76,    32,    74,    74,    74,    29,    74,    29,    29,
      76,    74,    74,    74,    29,    74
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
/* Line 1267 of yacc.c.  */
#line 2200 "mylang.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 260 "mylang.y"


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main(int args, char** argv) {
	// open a file handle to a particular file:
	FILE *myfile = fopen("input.txt", "r");

	// make sure it is valid:
	if (!myfile) {
		printf("I can't open input.txt!");
		return -1;
	}

	// set flex to read from it instead of defaulting to STDIN:
	yyin = myfile;

	// parse through the input until there is no more:
	yydebug = 1;
	line = 1;
	errorIndex = 2;
	ptr = (struct errorData*) malloc(errorIndex * sizeof(struct errorData));

	do {
		yyparse();
	} while (!feof(yyin));

    if(errors == 0){
        printf("\n\n---------------------------------------\n");
	    printf("Syntax is correct!!!\n");
    } else {
        printf("\n\n---------------------------------------\n");
        printf("Syntax is incorrect!!!\n Total errors: %d\n", yynerrs);
        for(int i = 0; i < errors; ++i) {
            printf("Error %s in line: %d\n", ptr[i].errorMsg, ptr[i].line);
        }

    }
    free(ptr);

}

yyerror(const char *s) {

    // Save errorMsg and errorline to dynamic array of structs
    strcpy(ptr[errors].errorMsg, s);
	ptr[errors].line = line;
	errors++;
	errorIndex++;
	ptr = realloc(ptr, errorIndex);

}

