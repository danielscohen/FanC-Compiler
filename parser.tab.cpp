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
	#define NEXT ($$->nextList = BUFF.makelist(addrPair(BUFF.emit("br label @"), FIRST)))

    using namespace std;
	using namespace output;

    int yylex();
	bool noRet;
	extern int yylineno;
    void yyerror(char const*);
	typedef std::pair<int, BranchLabelIndex> addrPair;


#line 89 "parser.tab.cpp" /* yacc.c:339  */

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

#line 184 "parser.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   245

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

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
       0,    45,    45,    48,    49,    52,    52,    57,    58,    61,
      62,    65,    66,    69,    72,    73,    78,    78,    79,    80,
      81,    82,    84,    85,    86,    88,    93,    95,    96,    97,
      97,    97,    97,   102,   102,   103,   106,   107,   107,   112,
     113,   114,   118,   119,   120,   121,   122,   123,   125,   126,
     127,   128,   129,   130,   131,   132,   135,   138,   141,   144,
     147,   150,   153,   158,   161,   162,   164,   164,   170,   173,
     176,   179,   182,   185
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
  "Statment", "$@2", "$@3", "$@4", "$@5", "Call", "$@6", "ExpList", "$@7",
  "Type", "Exp", "CaseList", "CaseDecl", "@8", "N", "M", "M1", "M2", "M3",
  "M4", YY_NULLPTR
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

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -68

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-68)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      57,  -111,  -111,  -111,  -111,    14,  -111,    57,    -5,  -111,
    -111,  -111,   -10,   231,    -9,  -111,    26,    23,    44,   231,
    -111,  -111,  -111,  -111,    -7,  -111,  -111,    80,  -111,    82,
      28,    -7,  -111,  -111,    -2,    66,    67,    43,    51,   -23,
      81,    72,     1,    97,  -111,  -111,  -111,    95,    60,  -111,
       1,     1,  -111,    42,  -111,  -111,     1,     1,     1,    68,
    -111,     0,   163,  -111,  -111,  -111,   148,  -111,  -111,  -111,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     163,   163,    89,  -111,     1,  -111,     1,    70,  -111,     1,
       1,   186,   186,   194,   194,   194,   194,    27,    27,  -111,
    -111,   146,   147,  -111,   162,   136,   113,  -111,   101,   124,
      90,  -111,  -111,  -111,  -111,    -7,  -111,    -7,     1,  -111,
      16,  -111,  -111,  -111,   190,   183,   191,   196,   187,  -111,
     221,  -111,    16,  -111,    -7,  -111,  -111,  -111,  -111,   198,
      -7,    -7,   193,  -111,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     8,    39,    40,    41,     0,     2,     3,     0,     7,
       1,     4,     0,     9,     0,    10,    11,     0,     0,     0,
      13,     5,    12,    68,    69,    69,    16,    69,    14,     0,
       0,    69,     6,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,    52,    53,    22,    49,    47,    51,
       0,     0,    48,     0,    27,    28,     0,     0,     0,    33,
      21,     0,    70,    17,    50,    54,     0,    23,    69,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    70,     0,    35,     0,    18,     0,     0,    42,     0,
       0,    61,    62,    57,    58,    59,    60,    43,    44,    45,
      46,     0,     0,    20,     0,    36,     0,    73,    56,    55,
       0,    71,    34,    37,    19,    69,    30,    69,     0,    72,
       0,    72,    38,    26,     0,     0,     0,    69,    24,    68,
       0,    31,     0,    68,    69,    66,    32,    63,    71,    69,
      69,    69,    69,    72,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   203,  -111,  -111,  -111,  -111,   220,  -111,   -30,
     -27,  -111,  -111,  -111,  -111,   211,  -111,   123,  -111,   -11,
     -21,   110,  -111,  -111,   -88,   -22,   164,   105,  -110,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    23,     8,    14,    15,    16,    27,
      28,    31,   101,   120,   136,    52,    84,   104,   118,     9,
     105,   126,   127,   140,    24,    29,    87,   117,   123,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    43,    17,    30,    25,    58,    44,    45,    17,    44,
      45,   128,    26,    53,    10,    46,    33,    85,    41,    59,
      12,    62,    47,    48,    49,    47,    48,    49,    86,    65,
      66,   124,    13,   144,    18,    80,    81,    82,   125,    50,
      51,   134,    50,    51,    19,   138,    89,    90,    20,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    67,
       1,     2,     3,    21,     4,   106,    78,    79,   108,   109,
      42,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    54,    55,    56,     2,     3,   119,     4,
     121,    25,    34,    57,    35,    36,    37,    61,    60,    26,
      32,    64,    59,    38,   139,   132,   103,    39,    25,   116,
     142,    83,    33,   107,   143,    33,    26,    63,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
     114,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,   113,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   110,
     111,    88,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    25,   112,   129,   130,   -67,    25,
      11,   131,    26,   -67,   133,   -67,   -64,    26,   -65,    72,
      73,    74,    75,    76,    77,    78,    79,   -68,   -68,   -68,
     -68,    76,    77,    78,    79,     2,     3,   135,     4,    22,
      40,   122,   137,   141,     0,   102
};

static const yytype_int16 yycheck[] =
{
      27,    31,    13,    25,    11,    28,     8,     9,    19,     8,
       9,   121,    19,    34,     0,    17,    43,    17,    29,    42,
      25,    42,    24,    25,    26,    24,    25,    26,    28,    50,
      51,    15,    42,   143,    43,    56,    57,    58,    22,    41,
      42,   129,    41,    42,    18,   133,    68,    69,    25,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    17,
       3,     4,     5,    19,     7,    86,    39,    40,    89,    90,
      42,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    17,    17,    42,     4,     5,   115,     7,
     117,    11,    10,    42,    12,    13,    14,    25,    17,    19,
      20,     6,    42,    21,   134,   127,    17,    25,    11,    19,
     140,    43,   139,    43,   141,   142,    19,    20,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      17,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    18,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    43,
      43,    43,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    11,    43,    16,    24,    15,    11,
       7,    20,    19,    20,    27,    22,    20,    19,    20,    33,
      34,    35,    36,    37,    38,    39,    40,    33,    34,    35,
      36,    37,    38,    39,    40,     4,     5,    16,     7,    19,
      29,   118,   132,   138,    -1,    81
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,    45,    46,    47,    49,    63,
       0,    46,    25,    42,    50,    51,    52,    63,    43,    18,
      25,    19,    51,    48,    68,    11,    19,    53,    54,    69,
      69,    55,    20,    54,    10,    12,    13,    14,    21,    25,
      59,    63,    42,    53,     8,     9,    17,    24,    25,    26,
      41,    42,    59,    64,    17,    17,    42,    42,    28,    42,
      17,    25,    64,    20,     6,    64,    64,    17,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      64,    64,    64,    43,    60,    17,    28,    70,    43,    69,
      69,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    56,    70,    17,    61,    64,    64,    43,    64,    64,
      43,    43,    43,    18,    17,    73,    19,    71,    62,    54,
      57,    54,    61,    72,    15,    22,    65,    66,    72,    16,
      24,    20,    69,    27,    68,    16,    58,    65,    68,    53,
      67,    71,    53,    54,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    48,    47,    49,    49,    50,
      50,    51,    51,    52,    53,    53,    55,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    56,
      57,    58,    54,    60,    59,    59,    61,    62,    61,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    65,    67,    66,    68,    69,
      70,    71,    72,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,    10,     1,     1,     0,
       1,     1,     3,     2,     1,     2,     0,     4,     4,     6,
       5,     3,     3,     4,     9,    14,     9,     3,     3,     0,
       0,     0,    11,     0,     5,     3,     1,     0,     4,     1,
       1,     1,     3,     3,     3,     3,     3,     1,     1,     1,
       2,     1,     1,     1,     2,     4,     4,     3,     3,     3,
       3,     3,     3,     3,     1,     4,     0,     5,     0,     0,
       0,     0,     0,     0
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
#line 48 "parser.ypp" /* yacc.c:1646  */
    {printProductionRule(2);}
#line 1380 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "parser.ypp" /* yacc.c:1646  */
    {noRet = true; prevDefCheck((yyvsp[-4])->name); addFunDef((yyvsp[-5])->name, (yyvsp[-4])->name, (yyvsp[-2])->pNames, (yyvsp[-2])->pTypes);
																			BUFF.emit(std::string("define ") + ((yyvsp[-5])->name == "VOID" ? "void" : "i32") + " @" + (yyvsp[-4])->name + getpTypesStr((yyvsp[-2])->pTypes) + "{"); BUFF.genLabel(); initVarStack(); 
																			}
#line 1388 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 54 "parser.ypp" /* yacc.c:1646  */
    {exitScope(); BUFF.bpatch((yyvsp[-2])->nextList, (yyvsp[-1])->label); if(!(yyvsp[-1])->nextList.empty()) BUFF.bpatch((yyvsp[-1])->nextList, BUFF.genLabel()); if((yyvsp[-9])->name != "VOID") BUFF.emit("ret i32 0"); if((yyvsp[-9])->name == "VOID") BUFF.emit("ret void"); BUFF.emit("}"); (yyval) = (yyvsp[-1]);}
#line 1394 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 57 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1400 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 58 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("VOID");}
#line 1406 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 61 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("");}
#line 1412 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 62 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1418 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 65 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1424 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 66 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); (yyval)->pNames.push_back((yyvsp[-2])->pNames[0]); (yyval)->pTypes.push_back((yyvsp[-2])->pTypes[0]);}
#line 1430 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 69 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Formals((yyvsp[0])->name, (yyvsp[-1])->name);}
#line 1436 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 72 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); }
#line 1442 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 73 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]); BUFF.bpatch((yyvsp[-1])->nextList, (yyvsp[0])->label); (yyval)->nextList = (yyvsp[0])->nextList; (yyval)->breakList = BUFF.merge((yyvsp[-1])->breakList,(yyvsp[0])->breakList);
		   																		(yyval)->trueList = BUFF.merge((yyvsp[-1])->trueList,(yyvsp[0])->trueList);(yyval)->falseList = BUFF.merge((yyvsp[-1])->falseList,(yyvsp[0])->falseList);(yyval)->contList = BUFF.merge((yyvsp[-1])->contList,(yyvsp[0])->contList);}
#line 1449 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "parser.ypp" /* yacc.c:1646  */
    {enterScope("");}
#line 1455 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 78 "parser.ypp" /* yacc.c:1646  */
    {exitScope(); (yyval) = (yyvsp[-1]);}
#line 1461 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 79 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp(""); prevDefCheck((yyvsp[-1])->name); addVarToSymTable((yyvsp[-2])->name, (yyvsp[-1])->name, 0); initVar((yyvsp[-1])->name, "0"); (yyval)->label = (yyvsp[-3])->label; (yyval)->nextList = BUFF.makelist(addrPair(BUFF.emit("br label @"), FIRST));}
#line 1467 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 80 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp(""); prevDefCheck((yyvsp[-3])->name); checkTypeMatch((yyvsp[-4])->name, (yyvsp[-1])->type); addVarToSymTable((yyvsp[-4])->name, (yyvsp[-3])->name, (yyvsp[-1])->val); initVar((yyvsp[-3])->name, getExpVal((yyvsp[-1]))); (yyval)->label = (yyvsp[-5])->label; (yyval)->nextList = BUFF.makelist(addrPair(BUFF.emit("br label @"), FIRST));}
#line 1473 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 81 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp(""); checkTypeMatch(getTypeById((yyvsp[-3])->name), (yyvsp[-1])->type);  changeValOfVar((yyvsp[-3])->name, (yyvsp[-1])->val); initVar((yyvsp[-3])->name, getExpVal((yyvsp[-1]))); (yyval)->label = (yyvsp[-4])->label; (yyval)->nextList = BUFF.makelist(addrPair(BUFF.emit("br label @"), FIRST));}
#line 1479 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 82 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]); (yyval)->label = (yyvsp[-2])->label; (yyval)->nextList = BUFF.merge((yyvsp[-1])->falseList, BUFF.merge((yyvsp[-1])->trueList, BUFF.makelist(addrPair(BUFF.emit("br label @"), FIRST))));
		 																		}
#line 1486 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 84 "parser.ypp" /* yacc.c:1646  */
    {checkRetMatchesFunc(""); BUFF.emit("ret void"); (yyval) = new Exp(""); noRet = false;(yyval)->label = (yyvsp[-2])->label;}
#line 1492 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 85 "parser.ypp" /* yacc.c:1646  */
    {checkRetMatchesFunc((yyvsp[-1])->type); BUFF.emit(std::string("ret i32 ") + getExpVal((yyvsp[-1]))); (yyval) = new Exp(""); noRet = false;(yyval)->label = (yyvsp[-3])->label;}
#line 1498 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 86 "parser.ypp" /* yacc.c:1646  */
    {BUFF.bpatch((yyvsp[-5])->trueList, (yyvsp[-1])->label); (yyval) = new Exp(""); auto temp = BUFF.makelist(addrPair(BUFF.emit("br label @"), FIRST));
		 																	(yyval)->nextList = BUFF.merge(BUFF.merge((yyvsp[-5])->falseList, (yyvsp[-1])->nextList), temp);(yyval)->label = (yyvsp[-8])->label; (yyval)->contList = (yyvsp[-1])->contList; (yyval)->breakList = (yyvsp[-1])->breakList;}
#line 1505 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 88 "parser.ypp" /* yacc.c:1646  */
    {BUFF.bpatch((yyvsp[-10])->trueList, (yyvsp[-6])->label);	(yyval) = new Exp("");
																					BUFF.bpatch((yyvsp[-10])->falseList, (yyvsp[-1])->label);
																					std::vector<addrPair> temp = BUFF.merge((yyvsp[-6])->nextList, (yyvsp[-3])->nextList); auto temp2 = BUFF.makelist(addrPair(BUFF.emit("br label @"), FIRST));
																					(yyval)->nextList = BUFF.merge(BUFF.merge(temp, (yyvsp[-1])->nextList), temp2);(yyval)->label = (yyvsp[-13])->label;
																					(yyval)->contList = BUFF.merge((yyvsp[-6])->contList, (yyvsp[-1])->contList); (yyval)->breakList = BUFF.merge((yyvsp[-6])->breakList, (yyvsp[-1])->breakList);}
#line 1515 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "parser.ypp" /* yacc.c:1646  */
    {BUFF.bpatch(BUFF.merge((yyvsp[-1])->contList,(yyvsp[-1])->nextList), (yyvsp[-7])->label); BUFF.bpatch((yyvsp[-5])->trueList, (yyvsp[-1])->label);
																					(yyval) = new Exp(""); (yyval)->nextList = BUFF.merge((yyvsp[-5])->falseList, (yyvsp[-1])->breakList); (yyval)->label = (yyvsp[-7])->label;}
#line 1522 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "parser.ypp" /* yacc.c:1646  */
    {checkBreak(); int addr = BUFF.emit("br label @"); (yyval) = new Exp(""); (yyval)->breakList = BUFF.makelist(addrPair(addr, FIRST));(yyval)->label = (yyvsp[-2])->label;}
#line 1528 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 96 "parser.ypp" /* yacc.c:1646  */
    {checkContinue();  (yyval) = new Exp(""); (yyval)->contList = BUFF.makelist(addrPair(BUFF.emit("br label @"), FIRST)); (yyval)->label = (yyvsp[-2])->label;}
#line 1534 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 97 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[0]), (yyvsp[0]));}
#line 1540 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 97 "parser.ypp" /* yacc.c:1646  */
    {enterScope("SWITCH");}
#line 1546 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 97 "parser.ypp" /* yacc.c:1646  */
    {exitScope();}
#line 1552 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 97 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-2]); BUFF.spatch((yyvsp[-2])->switchList, getExpVal((yyvsp[-7]))); 
		 																																(yyval)->nextList = BUFF.merge((yyvsp[-2])->nextList, (yyvsp[-2])->breakList); (yyval)->breakList.clear(); (yyval)->label = (yyvsp[-10])->label;}
#line 1559 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 102 "parser.ypp" /* yacc.c:1646  */
    {enterCallLabelScope();}
#line 1565 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 102 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = funCall((yyvsp[-4])->name, (yyvsp[-1])->pTypes); (yyval)->reg = doFuncCall((yyvsp[-1])->pTypes.size(), (yyvsp[-4])->name, (yyval)->trueList, (yyval)->falseList); exitCallLabelScope();}
#line 1571 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 103 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = funCall((yyvsp[-2])->name, std::vector<std::string>());}
#line 1577 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 106 "parser.ypp" /* yacc.c:1646  */
    {  (yyval) = new Exp(""); (yyval)->pTypes.push_back((yyvsp[0])->type); BUFF.doParamLast((yyvsp[0])->type, (yyvsp[0])->type == "BOOL" ? "" : getExpVal((yyvsp[0])), (yyvsp[0])->trueList, (yyvsp[0])->falseList);}
#line 1583 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 107 "parser.ypp" /* yacc.c:1646  */
    {BUFF.doParamLast((yyvsp[-1])->type, (yyvsp[-1])->type == "BOOL" ? "" : getExpVal((yyvsp[-1])), (yyvsp[-1])->trueList, (yyvsp[-1])->falseList);}
#line 1589 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 107 "parser.ypp" /* yacc.c:1646  */
    {(yyvsp[0])->pTypes.push_back((yyvsp[-3])->type); (yyval) = (yyvsp[0]);}
#line 1595 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 112 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("INT");}
#line 1601 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 113 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("BYTE");}
#line 1607 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 114 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Type("BOOL");}
#line 1613 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 118 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1619 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 119 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = doBinop((yyvsp[-2]), (yyvsp[0]), "add");}
#line 1625 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 120 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = doBinop((yyvsp[-2]), (yyvsp[0]), "sub");}
#line 1631 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 121 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = doBinop((yyvsp[-2]), (yyvsp[0]), "mul");}
#line 1637 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 122 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = doBinop((yyvsp[-2]), (yyvsp[0]), "sdiv");}
#line 1643 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 123 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = getById((yyvsp[0])); int addr; if((yyval)->type == "BOOL") addr = doRelop((yyval)->reg, "1", "eq"); 
																			(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST)); (yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND));}
#line 1650 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 125 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1656 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 126 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1662 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 127 "parser.ypp" /* yacc.c:1646  */
    {checkByte((yyvsp[-1])->val); (yyval) = (yyvsp[-1]); (yyval)->type = "BYTE";}
#line 1668 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 128 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1674 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 129 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); (yyval)->trueList = doList();}
#line 1680 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 130 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); (yyval)->falseList = doList();}
#line 1686 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 131 "parser.ypp" /* yacc.c:1646  */
    {checkNot((yyvsp[0])); (yyval) = new Exp("BOOL"); (yyval)->trueList = (yyvsp[0])->falseList; (yyval)->falseList = (yyvsp[0])->trueList;}
#line 1692 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 132 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp("BOOL"); checkBool((yyvsp[-3]),(yyvsp[0]));  BUFF.bpatch((yyvsp[-3])->trueList, (yyvsp[-1])->label);
																									(yyval)->trueList = (yyvsp[0])->trueList;
																									(yyval)->falseList = BUFF.merge((yyvsp[-3])->falseList, (yyvsp[0])->falseList);}
#line 1700 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 135 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp("BOOL");checkBool((yyvsp[-3]),(yyvsp[0]));  BUFF.bpatch((yyvsp[-3])->falseList, (yyvsp[-1])->label);
																									(yyval)->trueList = BUFF.merge((yyvsp[-3])->trueList, (yyvsp[0])->trueList);
																									(yyval)->falseList = (yyvsp[0])->falseList;}
#line 1708 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 138 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "slt");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND)); }
#line 1716 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 141 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "sle");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND)); }
#line 1724 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 144 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "sgt");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND)); }
#line 1732 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "sge");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND)); }
#line 1740 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 150 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "eq");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND)); }
#line 1748 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 153 "parser.ypp" /* yacc.c:1646  */
    {checkRelop((yyvsp[-2]), (yyvsp[0])); (yyval) = new Exp("BOOL"); int addr = doRelop(getExpVal((yyvsp[-2])), getExpVal((yyvsp[0])), "ne");
																									(yyval)->trueList = BUFF.makelist(addrPair(addr, FIRST));
																									(yyval)->falseList = BUFF.makelist(addrPair(addr, SECOND)); }
#line 1756 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 158 "parser.ypp" /* yacc.c:1646  */
    {BUFF.bpatch((yyvsp[-2])->nextCaseList, (yyvsp[-1])->label); BUFF.bpatch((yyvsp[-2])->nextList, (yyvsp[0])->label);
																			(yyval) = new Exp(""); (yyval)->label = (yyvsp[-2])->label; (yyval)->contList = BUFF.merge((yyvsp[-2])->contList, (yyvsp[0])->contList);
																			(yyval)->breakList = BUFF.merge((yyvsp[-2])->breakList, (yyvsp[0])->breakList);(yyval)->switchList = BUFF.merge((yyvsp[-2])->switchList, (yyvsp[0])->switchList); (yyval)->nextList = (yyvsp[0])->nextList;}
#line 1764 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 161 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); (yyval)->nextList = BUFF.merge((yyvsp[0])->nextList, (yyvsp[0])->nextCaseList);}
#line 1770 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 162 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); BUFF.bpatch((yyvsp[-1])->nextList, (yyvsp[0])->label);}
#line 1776 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 164 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp(""); BUFF.checkCase(std::to_string((yyvsp[-1])->val), (yyvsp[-1])->nextCaseList, (yyvsp[-1])->nextList, (yyvsp[-1])->switchList);}
#line 1782 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 164 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-3]);BUFF.bpatch((yyvsp[-3])->nextList, (yyvsp[0])->label);
																																(yyval)->contList = (yyvsp[0])->contList;(yyval)->breakList = (yyvsp[0])->breakList;
																																(yyval)->label = (yyvsp[0])->label;(yyval)->nextList = (yyvsp[0])->nextList;}
#line 1790 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 170 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp(""); int addr = BUFF.emit("br label @"); (yyval)->nextList = BUFF.makelist(addrPair(addr, FIRST));}
#line 1796 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 173 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = new Exp(""); (yyval)->label = BUFF.genLabel();}
#line 1802 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 176 "parser.ypp" /* yacc.c:1646  */
    {YYSTYPE e = yyvsp[0]; checkBool(e, e);}
#line 1808 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 179 "parser.ypp" /* yacc.c:1646  */
    {enterScope("");}
#line 1814 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 182 "parser.ypp" /* yacc.c:1646  */
    {exitScope();}
#line 1820 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 185 "parser.ypp" /* yacc.c:1646  */
    {enterScope("WHILE");}
#line 1826 "parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 1830 "parser.tab.cpp" /* yacc.c:1646  */
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
#line 188 "parser.ypp" /* yacc.c:1906  */



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
	BUFF.printGlobalBuffer();
	BUFF.printCodeBuffer();
    return parseRes;
}

void yyerror(char const* s){
	errorSyn(yylineno);
	exit(0);
}
