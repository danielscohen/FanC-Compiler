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
#line 1 "parser.ypp" /* yacc.c:339  */

	#include <iostream>
	#include "yystype.h"
	#include "parser_utils.h"
	#include "hw3_output.hpp"
	#include "bp.hpp"
	#include <string>
	// #define YYDEBUG 1
	// #define YYERROR_VERBOSE 1
	#define BUFF CodeBuffer::instance()

    using namespace std;
	using namespace output;

    int yylex();
	extern int yylineno;
    void yyerror(char const*);
	typedef std::pair<int, BranchLabelIndex> addrPair;


#line 87 "parser.tab.cpp" /* yacc.c:339  */

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
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
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
    VOID = 258,
    INT = 259,
    BYTE = 260,
    B = 261,
    BOOL = 262,
    TRUE = 263,
    FALSE = 264,
    RETURN = 265,
    WHILE = 266,
    BREAK = 267,
    CONTINUE = 268,
    SWITCH = 269,
    DEFAULT = 270,
    COLON = 271,
    SC = 272,
    COMMA = 273,
    LBRACE = 274,
    RBRACE = 275,
    IF = 276,
    CASE = 277,
    HELSE = 278,
    NUM = 279,
    ID = 280,
    STRING = 281,
    ELSE = 282,
    ASSIGN = 283,
    OR = 284,
    AND = 285,
    EQUAL = 286,
    NEQUAL = 287,
    LT = 288,
    LTE = 289,
    GT = 290,
    GTE = 291,
    ADD = 292,
    SUB = 293,
    MULT = 294,
    DIV = 295,
    NOT = 296,
    LPAREN = 297,
    RPAREN = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 182 "parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    46,    47,    50,    50,    55,    56,    59,
      60,    63,    64,    67,    70,    71,    74,    74,    75,    76,
      77,    78,    79,    80,    81,    83,    87,    89,    90,    91,
      91,    91,    91,    94,    97,   100,   103,   106,   109,   112,
     113,   116,   117,   117,   117,   122,   123,   124,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   141,   144,   144,   147,   150,   153,   156,   159,
     162,   167,   168,   169,   171
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "BYTE", "B", "BOOL",
  "TRUE", "FALSE", "RETURN", "WHILE", "BREAK", "CONTINUE", "SWITCH",
  "DEFAULT", "COLON", "SC", "COMMA", "LBRACE", "RBRACE", "IF", "CASE",
  "HELSE", "NUM", "ID", "STRING", "ELSE", "ASSIGN", "OR", "AND", "EQUAL",
  "NEQUAL", "LT", "LTE", "GT", "GTE", "ADD", "SUB", "MULT", "DIV", "NOT",
  "LPAREN", "RPAREN", "$accept", "Program", "Funcs", "FuncDecl", "$@1",
  "RetType", "Formals", "FormalsList", "FormalDecl", "Statements",
  "Statment", "$@2", "$@3", "$@4", "$@5", "N", "M", "M1", "M2", "M3", "M4",
  "Call", "ExpList", "$@6", "$@7", "Type", "Exp", "@8", "@9", "CaseList",
  "CaseDecl", YY_NULLPTR
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
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -125

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-125)))

#define YYTABLE_NINF -75

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-75)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      74,  -125,  -125,  -125,  -125,     8,  -125,    74,   -12,  -125,
    -125,  -125,   -25,    29,    -1,  -125,    25,     1,    26,    29,
    -125,  -125,  -125,   198,    67,  -125,    27,    32,    19,  -125,
      20,   -17,    45,  -125,    50,    44,  -125,  -125,  -125,    65,
      38,  -125,    22,    22,  -125,    90,    40,  -125,  -125,    22,
     198,    22,    22,    -2,  -125,   198,  -125,   -13,  -125,  -125,
     195,  -125,  -125,  -125,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,   210,    54,   210,   114,  -125,
      42,   161,  -125,  -125,    22,  -125,    22,    22,   147,   147,
     218,   218,   218,   218,   -19,   -19,  -125,  -125,   210,    52,
    -125,    56,  -125,  -125,    79,   138,   102,   125,    58,    83,
    -125,  -125,  -125,  -125,  -125,  -125,    22,  -125,    -3,   198,
    -125,   198,    88,    86,    91,    -3,  -125,  -125,   198,    97,
    -125,  -125,    76,  -125,    94,   198,  -125,  -125,    -6,  -125,
    -125,   198,  -125,  -125
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     8,    45,    46,    47,     0,     2,     3,     0,     7,
       1,     4,     0,     9,     0,    10,    11,     0,     0,     0,
      13,     5,    12,     0,     0,    34,     0,     0,     0,    16,
       0,     0,    34,    14,     0,     0,    58,    59,    22,    55,
      53,    57,     0,     0,    54,     0,     0,    27,    28,     0,
       0,     0,     0,     0,     6,     0,    21,     0,    56,    60,
       0,    23,    63,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    34,    35,     0,    40,
       0,    41,    15,    18,     0,    48,     0,     0,    69,    70,
      65,    66,    67,    68,    49,    50,    51,    52,    35,     0,
      17,     0,    20,    39,     0,     0,    64,    62,     0,     0,
      34,    43,    19,    34,    30,    36,     0,    38,     0,     0,
      44,     0,     0,     0,     0,    72,    37,    37,     0,     0,
      31,    71,    24,    26,    34,     0,    32,    33,    34,    34,
      36,     0,    37,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -125,  -125,   109,  -125,  -125,  -125,  -125,    98,  -125,   -45,
     -53,  -125,  -125,  -125,  -125,  -125,   -24,    68,    48,  -124,
    -125,   -23,    73,  -125,  -125,    87,   -14,  -125,  -125,    81,
    -125
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    23,     8,    14,    15,    16,    32,
      33,    50,    99,   118,   136,   139,    55,   101,   119,   132,
     121,    44,    80,   104,   116,    35,    81,    87,    86,   124,
     125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    46,    82,   133,    83,    76,    36,    37,    10,   -74,
      45,    52,   122,    12,   -74,    84,   -74,    13,   143,   123,
      72,    73,    39,    40,    41,    53,    20,    34,    59,    60,
      36,    37,    34,     2,     3,    75,     4,    77,    78,    42,
      43,    79,    18,    19,    47,    21,    39,    40,    41,    48,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    49,    51,    42,    43,    54,   126,    56,   127,    57,
     105,    58,   106,   107,   100,    36,    37,     1,     2,     3,
      53,     4,    74,   134,    38,   103,   115,     9,   142,   117,
     138,    39,    40,    41,     9,   109,    34,   111,    34,   110,
      17,   113,   114,   137,   128,    34,    17,    61,    42,    43,
     129,   130,    34,   135,   -73,   140,    11,    22,    34,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,   102,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,   112,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,   108,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,   -42,
      66,    67,    68,    69,    70,    71,    72,    73,   141,   120,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     2,     3,     0,     4,   131,     0,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    29,     0,    30,
       0,     0,     0,    31,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,     0,    85,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,   -75,   -75,   -75,   -75,    70,    71,    72,    73
};

static const yytype_int16 yycheck[] =
{
      23,    25,    55,   127,    17,    50,     8,     9,     0,    15,
      24,    28,    15,    25,    20,    28,    22,    42,   142,    22,
      39,    40,    24,    25,    26,    42,    25,    50,    42,    43,
       8,     9,    55,     4,     5,    49,     7,    51,    52,    41,
      42,    43,    43,    18,    17,    19,    24,    25,    26,    17,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    42,    42,    41,    42,    20,   119,    17,   121,    25,
      84,     6,    86,    87,    20,     8,     9,     3,     4,     5,
      42,     7,    42,   128,    17,    43,   110,     0,   141,   113,
     135,    24,    25,    26,     7,    43,   119,    18,   121,    43,
      13,    43,    19,    27,    16,   128,    19,    17,    41,    42,
      24,    20,   135,    16,    20,   139,     7,    19,   141,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    17,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    17,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    98,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    18,
      33,    34,    35,    36,    37,    38,    39,    40,   140,   116,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     4,     5,    -1,     7,   125,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    -1,    -1,    25,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    43,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    33,    34,    35,    36,    37,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,    45,    46,    47,    49,    69,
       0,    46,    25,    42,    50,    51,    52,    69,    43,    18,
      25,    19,    51,    48,    10,    11,    12,    13,    14,    19,
      21,    25,    53,    54,    65,    69,     8,     9,    17,    24,
      25,    26,    41,    42,    65,    70,    60,    17,    17,    42,
      55,    42,    28,    42,    20,    60,    17,    25,     6,    70,
      70,    17,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    42,    70,    53,    70,    70,    43,
      66,    70,    54,    17,    28,    43,    72,    71,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    56,
      20,    61,    17,    43,    67,    70,    70,    70,    61,    43,
      43,    18,    17,    43,    19,    60,    68,    60,    57,    62,
      66,    64,    15,    22,    73,    74,    54,    54,    16,    24,
      20,    73,    63,    63,    53,    16,    58,    27,    53,    59,
      60,    62,    54,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    48,    47,    49,    49,    50,
      50,    51,    51,    52,    53,    53,    55,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    56,
      57,    58,    54,    59,    60,    61,    62,    63,    64,    65,
      65,    66,    67,    68,    66,    69,    69,    69,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    71,    70,    72,    70,    70,    70,    70,    70,    70,
      70,    73,    73,    73,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     9,     1,     1,     0,
       1,     1,     3,     2,     1,     3,     0,     4,     3,     5,
       4,     2,     2,     3,     9,    15,    10,     2,     2,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     4,
       3,     1,     0,     0,     5,     1,     1,     1,     3,     3,
       3,     3,     3,     1,     1,     1,     2,     1,     1,     1,
       2,     0,     4,     0,     4,     3,     3,     3,     3,     3,
       3,     2,     1,     3,     4
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
        case 3:
#line 46 "parser.ypp" /* yacc.c:1646  */
    {printProductionRule(2);}
#line 1382 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 50 "parser.ypp" /* yacc.c:1646  */
    {prevDefCheck((yyvsp[-4])->name); addFunDef((yyvsp[-5])->name, (yyvsp[-4])->name, (yyvsp[-2])->pNames, (yyvsp[-2])->pTypes);
																			BUFF.emit(std::string("define ") + ((yyvsp[-5])->name == "VOID" ? "void" : "i32") + " @" + (yyvsp[-4])->name + getpTypesStr((yyvsp[-2])->pTypes) + "{"); initVarStack();
																			}
#line 1390 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 52 "parser.ypp" /* yacc.c:1646  */
    {exitScope(); if((yyvsp[-1])->noRet && (yyvsp[-8])->name != "VOID") BUFF.emit("ret i32 0"); if((yyvsp[-1])->noRet && (yyvsp[-8])->name == "VOID") BUFF.emit("ret void"); BUFF.emit("}"); (yyval) = (yyvsp[-1]);}
#line 1396 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 55 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1402 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("VOID");}
#line 1408 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 59 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("");}
#line 1414 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 60 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1420 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 63 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1426 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 64 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); (yyval)->pNames.push_back((yyvsp[-2])->pNames[0]); (yyval)->pTypes.push_back((yyvsp[-2])->pTypes[0]);}
#line 1432 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 67 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Formals((yyvsp[0])->name, (yyvsp[-1])->name);}
#line 1438 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 70 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1444 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 71 "parser.ypp" /* yacc.c:1646  */
    {BUFF.bpatch((yyvsp[-2])->nextList, (yyvsp[-1])->label); (yyval) = (yyvsp[0]);}
#line 1450 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 74 "parser.ypp" /* yacc.c:1646  */
    {enterScope("");}
#line 1456 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 74 "parser.ypp" /* yacc.c:1646  */
    {exitScope();}
#line 1462 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 75 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp(""); prevDefCheck((yyvsp[-1])->name); addVarToSymTable((yyvsp[-2])->name, (yyvsp[-1])->name, 0); initVar((yyvsp[-1])->name, 0);}
#line 1468 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 76 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp(""); prevDefCheck((yyvsp[-3])->name); checkTypeMatch((yyvsp[-4])->name, (yyvsp[-1])->type); addVarToSymTable((yyvsp[-4])->name, (yyvsp[-3])->name, (yyvsp[-1])->val); initVar((yyvsp[-3])->name, (yyvsp[-1])->val);}
#line 1474 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 77 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp(""); checkTypeMatch(getTypeById((yyvsp[-3])->name), (yyvsp[-1])->type);  changeValOfVar((yyvsp[-3])->name, (yyvsp[-1])->val); initVar((yyvsp[-3])->name, (yyvsp[-1])->val);}
#line 1480 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 78 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1486 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 79 "parser.ypp" /* yacc.c:1646  */
    {checkRetMatchesFunc(""); BUFF.emit("ret"); (yyval) = new Exp(""); (yyval)->noRet = false;}
#line 1492 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 80 "parser.ypp" /* yacc.c:1646  */
    {checkRetMatchesFunc((yyvsp[-1])->type); BUFF.emit(std::string("ret i32 ") + ((yyvsp[-1])->reg == "" ? std::to_string((yyvsp[-1])->val) : (yyvsp[-1])->reg)); (yyval) = new Exp(""); (yyval)->noRet = false;}
#line 1498 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 81 "parser.ypp" /* yacc.c:1646  */
    {BUFF.bpatch((yyvsp[-6])->trueList, (yyvsp[-3])->label); (yyval) = new Exp("");
		 																	(yyval)->nextList = BUFF.merge((yyvsp[-6])->falseList, (yyvsp[-1])->nextList);}
#line 1505 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 83 "parser.ypp" /* yacc.c:1646  */
    {BUFF.bpatch((yyvsp[-12])->trueList, (yyvsp[-9])->label);	(yyval) = new Exp("");
																					BUFF.bpatch((yyvsp[-12])->falseList, (yyvsp[-3])->label);
																					std::vector<addrPair> temp = BUFF.merge((yyvsp[-7])->nextList, (yyvsp[-4])->nextList);
																					(yyval)->nextList = BUFF.merge(temp, (yyvsp[-1])->nextList);}
#line 1514 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 87 "parser.ypp" /* yacc.c:1646  */
    {BUFF.bpatch((yyvsp[-1])->nextList, (yyvsp[-8])->label); BUFF.bpatch((yyvsp[-6])->trueList, (yyvsp[-3])->label);
																					(yyval) = new Exp(""); (yyval)->nextList = BUFF.merge((yyvsp[-6])->falseList, (yyvsp[-1])->breakList); BUFF.emit("br label " + (yyvsp[-8])->label);}
#line 1521 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 89 "parser.ypp" /* yacc.c:1646  */
    {checkBreak(); int addr = BUFF.emit("br label @"); (yyval) = new Exp(""); (yyval)->breakList = BUFF.makelist(addrPair(addr, FIRST));}
#line 1527 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 90 "parser.ypp" /* yacc.c:1646  */
    {checkContinue(); int addr = BUFF.emit("br label @"); (yyval) = new Exp(""); (yyval)->nextList = BUFF.makelist(addrPair(addr, FIRST));}
#line 1533 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 91 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[0]), (yyvsp[0]));}
#line 1539 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 91 "parser.ypp" /* yacc.c:1646  */
    {enterScope("SWITCH");}
#line 1545 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 91 "parser.ypp" /* yacc.c:1646  */
    {exitScope();}
#line 1551 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 91 "parser.ypp" /* yacc.c:1646  */
    {printProductionRule(26);}
#line 1557 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 94 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp(""); int addr = BUFF.emit("br label @"); (yyval)->nextList = BUFF.makelist(addrPair(addr, FIRST));}
#line 1563 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 97 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp(""); (yyval)->label = BUFF.genLabel();}
#line 1569 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 100 "parser.ypp" /* yacc.c:1646  */
    {YYSTYPE e = yyvsp[0]; checkBool(e, e);}
#line 1575 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 103 "parser.ypp" /* yacc.c:1646  */
    {enterScope("");}
#line 1581 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 106 "parser.ypp" /* yacc.c:1646  */
    {exitScope();}
#line 1587 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 109 "parser.ypp" /* yacc.c:1646  */
    {enterScope("WHILE");}
#line 1593 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 112 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = funCall((yyvsp[-3])->name, (yyvsp[-1])->pTypes); doFuncCall((yyvsp[-1])->pTypes.size(), (yyvsp[-3])->name); (yyval) = (yyvsp[-1]);}
#line 1599 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 113 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = funCall((yyvsp[-2])->name, std::vector<std::string>());}
#line 1605 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 116 "parser.ypp" /* yacc.c:1646  */
    {doParam((yyvsp[0])->type, getExpVal((yyvsp[0])), (yyvsp[0])->trueList, (yyvsp[0])->falseList, true); (yyvsp[0])->pTypes.push_back((yyvsp[0])->type); (yyval) = (yyvsp[0]); BUFF.pRegIndex = 1;}
#line 1611 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 117 "parser.ypp" /* yacc.c:1646  */
    {(yyvsp[0])->nextList = doParam((yyvsp[0])->type, getExpVal((yyvsp[0])), (yyvsp[0])->trueList, (yyvsp[0])->falseList, false);}
#line 1617 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "parser.ypp" /* yacc.c:1646  */
    {BUFF.bpatch((yyvsp[-2])->nextList, BUFF.genLabel());}
#line 1623 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 117 "parser.ypp" /* yacc.c:1646  */
    {(yyvsp[0])->pTypes.push_back((yyvsp[-4])->type); (yyval) = (yyvsp[0]);}
#line 1629 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 122 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("INT");}
#line 1635 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 123 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("BYTE");}
#line 1641 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 124 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("BOOL");}
#line 1647 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 128 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1653 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 129 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = doBinop((yyvsp[-2]), (yyvsp[0]), "add");}
#line 1659 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 130 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = doBinop((yyvsp[-2]), (yyvsp[0]), "sub");}
#line 1665 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 131 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = doBinop((yyvsp[-2]), (yyvsp[0]), "mul");}
#line 1671 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 132 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = doBinop((yyvsp[-2]), (yyvsp[0]), "sdiv");}
#line 1677 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 133 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = getById((yyvsp[0]));}
#line 1683 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 134 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1689 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 135 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1695 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 136 "parser.ypp" /* yacc.c:1646  */
    {checkByte((yyvsp[-1])->val); (yyval) = (yyvsp[-1]); (yyval)->type = "BYTE";}
#line 1701 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 137 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1707 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 138 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); (yyval)->trueList = doList();}
#line 1713 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 139 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); (yyval)->falseList = doList();}
#line 1719 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 140 "parser.ypp" /* yacc.c:1646  */
    {checkNot((yyvsp[0])); (yyval) = (yyvsp[0]); (yyval)->trueList = (yyvsp[0])->falseList; (yyval)->falseList = (yyvsp[0])->trueList;}
#line 1725 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 141 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp("BOOL"); (yyval)->label = BUFF.genLabel();}
#line 1731 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 141 "parser.ypp" /* yacc.c:1646  */
    {checkBool((yyvsp[-3]),(yyvsp[0]));  BUFF.bpatch((yyvsp[-3])->trueList, (yyvsp[0])->label);
																									(yyval)->trueList = (yyvsp[0])->trueList;
																									(yyval)->falseList = BUFF.merge((yyvsp[-3])->falseList, (yyvsp[0])->falseList);}
#line 1739 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 144 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp("BOOL"); (yyval)->label = BUFF.genLabel();}
#line 1745 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 144 "parser.ypp" /* yacc.c:1646  */
    {checkBool((yyvsp[-3]),(yyvsp[-1]));  BUFF.bpatch((yyvsp[-3])->falseList, (yyvsp[0])->label);
																									(yyval)->trueList = BUFF.merge((yyvsp[-3])->trueList, (yyvsp[0])->trueList);
																									(yyval)->falseList = (yyvsp[0])->falseList;}
#line 1753 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 147 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "slt");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, FIRST)); }
#line 1761 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 150 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "sle");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND)); }
#line 1769 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 153 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "sgt");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND)); }
#line 1777 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 156 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "sge");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND)); }
#line 1785 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 159 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "eq");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND)); }
#line 1793 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 162 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "ne");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND)); }
#line 1801 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 167 "parser.ypp" /* yacc.c:1646  */
    {printProductionRule(48);}
#line 1807 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 168 "parser.ypp" /* yacc.c:1646  */
    {printProductionRule(49);}
#line 1813 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 169 "parser.ypp" /* yacc.c:1646  */
    {printProductionRule(50);}
#line 1819 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 171 "parser.ypp" /* yacc.c:1646  */
    {printProductionRule(51);}
#line 1825 "parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 1829 "parser.tab.cpp" /* yacc.c:1646  */
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
#line 175 "parser.ypp" /* yacc.c:1906  */



////////////TODO ASK DANIAL///////////////

int main()
{
	/* yydebug = 1; */
	enterScope("");
	addFunDefPrint("VOID", "print", std::vector<std::string>(), std::vector<std::string>{"STRING"} );
	addFunDefPrint("VOID", "printi", std::vector<std::string>(), std::vector<std::string>{"INT"} );
	BUFF.addBegCodetoBuffer();
	int parseRes = yyparse();
	checkForMain();
	exitScope();
	BUFF.printCodeBuffer();
    return parseRes;
}

void yyerror(char const* s){
	errorSyn(yylineno);
	exit(0);
}