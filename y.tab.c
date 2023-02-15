/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "main.y"

#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;

#line 78 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 8 "main.y"

	#include "symbol_table.h"

#line 117 "y.tab.c"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    INT = 259,                     /* INT  */
    FLOAT = 260,                   /* FLOAT  */
    CHAR = 261,                    /* CHAR  */
    STRING = 262,                  /* STRING  */
    BOOL = 263,                    /* BOOL  */
    INTTYPE = 264,                 /* INTTYPE  */
    FLOATTYPE = 265,               /* FLOATTYPE  */
    CHARTYPE = 266,                /* CHARTYPE  */
    STRINGTYPE = 267,              /* STRINGTYPE  */
    BOOLTYPE = 268,                /* BOOLTYPE  */
    FUNCTION = 269,                /* FUNCTION  */
    CONST = 270,                   /* CONST  */
    CLASS = 271,                   /* CLASS  */
    IF = 272,                      /* IF  */
    WHILE = 273,                   /* WHILE  */
    FOR = 274,                     /* FOR  */
    BGIN = 275,                    /* BGIN  */
    END = 276,                     /* END  */
    CALL = 277,                    /* CALL  */
    PRINT = 278,                   /* PRINT  */
    ASSIGN = 279,                  /* ASSIGN  */
    AND = 280,                     /* AND  */
    OR = 281,                      /* OR  */
    COMP_OP = 282,                 /* COMP_OP  */
    INCREMENT_OP = 283,            /* INCREMENT_OP  */
    DECREMENT_OP = 284,            /* DECREMENT_OP  */
    ELSE = 285                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define INT 259
#define FLOAT 260
#define CHAR 261
#define STRING 262
#define BOOL 263
#define INTTYPE 264
#define FLOATTYPE 265
#define CHARTYPE 266
#define STRINGTYPE 267
#define BOOLTYPE 268
#define FUNCTION 269
#define CONST 270
#define CLASS 271
#define IF 272
#define WHILE 273
#define FOR 274
#define BGIN 275
#define END 276
#define CALL 277
#define PRINT 278
#define ASSIGN 279
#define AND 280
#define OR 281
#define COMP_OP 282
#define INCREMENT_OP 283
#define DECREMENT_OP 284
#define ELSE 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "main.y"

    struct Symbol* s;
	struct Node *n;

#line 202 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '|'  */
  YYSYMBOL_4_ = 4,                         /* '&'  */
  YYSYMBOL_5_ = 5,                         /* '+'  */
  YYSYMBOL_6_ = 6,                         /* '-'  */
  YYSYMBOL_7_ = 7,                         /* '*'  */
  YYSYMBOL_8_ = 8,                         /* '/'  */
  YYSYMBOL_9_ = 9,                         /* '%'  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_INT = 11,                       /* INT  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_STRING = 14,                    /* STRING  */
  YYSYMBOL_BOOL = 15,                      /* BOOL  */
  YYSYMBOL_INTTYPE = 16,                   /* INTTYPE  */
  YYSYMBOL_FLOATTYPE = 17,                 /* FLOATTYPE  */
  YYSYMBOL_CHARTYPE = 18,                  /* CHARTYPE  */
  YYSYMBOL_STRINGTYPE = 19,                /* STRINGTYPE  */
  YYSYMBOL_BOOLTYPE = 20,                  /* BOOLTYPE  */
  YYSYMBOL_FUNCTION = 21,                  /* FUNCTION  */
  YYSYMBOL_CONST = 22,                     /* CONST  */
  YYSYMBOL_CLASS = 23,                     /* CLASS  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_BGIN = 27,                      /* BGIN  */
  YYSYMBOL_END = 28,                       /* END  */
  YYSYMBOL_CALL = 29,                      /* CALL  */
  YYSYMBOL_PRINT = 30,                     /* PRINT  */
  YYSYMBOL_ASSIGN = 31,                    /* ASSIGN  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_OR = 33,                        /* OR  */
  YYSYMBOL_COMP_OP = 34,                   /* COMP_OP  */
  YYSYMBOL_INCREMENT_OP = 35,              /* INCREMENT_OP  */
  YYSYMBOL_DECREMENT_OP = 36,              /* DECREMENT_OP  */
  YYSYMBOL_ELSE = 37,                      /* ELSE  */
  YYSYMBOL_38_ = 38,                       /* ';'  */
  YYSYMBOL_39_ = 39,                       /* '('  */
  YYSYMBOL_40_ = 40,                       /* ')'  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_43_ = 43,                       /* ','  */
  YYSYMBOL_44_ = 44,                       /* '.'  */
  YYSYMBOL_45_ = 45,                       /* '~'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_progr = 47,                     /* progr  */
  YYSYMBOL_instructiuni = 48,              /* instructiuni  */
  YYSYMBOL_instructiune = 49,              /* instructiune  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_52_3 = 52,                      /* $@3  */
  YYSYMBOL_53_4 = 53,                      /* $@4  */
  YYSYMBOL_declaratii = 54,                /* declaratii  */
  YYSYMBOL_declaratie = 55,                /* declaratie  */
  YYSYMBOL_56_5 = 56,                      /* $@5  */
  YYSYMBOL_tip = 57,                       /* tip  */
  YYSYMBOL_dim = 58,                       /* dim  */
  YYSYMBOL_params_sign = 59,               /* params_sign  */
  YYSYMBOL_param_sign = 60,                /* param_sign  */
  YYSYMBOL_var_expr = 61,                  /* var_expr  */
  YYSYMBOL_pas = 62,                       /* pas  */
  YYSYMBOL_apel = 63,                      /* apel  */
  YYSYMBOL_parametri = 64,                 /* parametri  */
  YYSYMBOL_parametru = 65,                 /* parametru  */
  YYSYMBOL_const = 66,                     /* const  */
  YYSYMBOL_const_num = 67,                 /* const_num  */
  YYSYMBOL_const_gen = 68,                 /* const_gen  */
  YYSYMBOL_atribuire = 69,                 /* atribuire  */
  YYSYMBOL_conditii = 70,                  /* conditii  */
  YYSYMBOL_conditie = 71,                  /* conditie  */
  YYSYMBOL_data_num = 72,                  /* data_num  */
  YYSYMBOL_expr_aritm = 73,                /* expr_aritm  */
  YYSYMBOL_op_string = 74                  /* op_string  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     9,     4,     2,
      39,    40,     7,     5,    43,     6,    44,     8,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     2,    45,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    30,    30,    33,    34,    37,    38,    39,    39,    40,
      40,    41,    41,    42,    42,    43,    46,    47,    50,    51,
      52,    53,    54,    55,    55,    56,    59,    60,    61,    62,
      63,    66,    67,    68,    70,    71,    72,    75,    78,    79,
      80,    81,    82,    85,    86,    87,    88,    89,    92,    93,
      94,    95,    98,    99,   102,   103,   104,   105,   108,   109,
     112,   113,   116,   117,   118,   121,   129,   138,   147,   148,
     149,   152,   153,   154,   155,   158,   159,   162,   163,   164,
     165,   166,   168,   169,   170,   171
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "'|'", "'&'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "ID", "INT", "FLOAT", "CHAR", "STRING",
  "BOOL", "INTTYPE", "FLOATTYPE", "CHARTYPE", "STRINGTYPE", "BOOLTYPE",
  "FUNCTION", "CONST", "CLASS", "IF", "WHILE", "FOR", "BGIN", "END",
  "CALL", "PRINT", "ASSIGN", "AND", "OR", "COMP_OP", "INCREMENT_OP",
  "DECREMENT_OP", "ELSE", "';'", "'('", "')'", "'['", "']'", "','", "'.'",
  "'~'", "$accept", "progr", "instructiuni", "instructiune", "$@1", "$@2",
  "$@3", "$@4", "declaratii", "declaratie", "$@5", "tip", "dim",
  "params_sign", "param_sign", "var_expr", "pas", "apel", "parametri",
  "parametru", "const", "const_num", "const_gen", "atribuire", "conditii",
  "conditie", "data_num", "expr_aritm", "op_string", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-77)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     126,    39,     7,    21,    29,    43,    58,   -58,   150,   -58,
     -58,   -58,   -58,    19,     5,   -58,   -28,   -58,    50,   -58,
     -58,    51,    60,    44,    44,    44,    44,    44,    56,    67,
      89,    66,    73,    74,    84,    85,   -58,   126,    32,    91,
      92,   -58,   115,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   117,    78,   110,     9,     9,    60,     1,
      55,   -58,   -58,   -58,   -58,    93,   -58,    76,    95,   -58,
     -58,   -58,   -58,   -58,   -58,   112,   131,   135,   -58,   -58,
     -58,   -58,   150,   141,   -58,   143,   138,    63,   145,   140,
     144,   -58,   -58,   -58,   -58,   -58,   146,   142,   -58,   147,
     148,     4,   101,    22,   170,   149,    56,   100,   153,   156,
       9,     9,    76,   157,     9,   -58,    40,   -58,   -58,   -58,
     -58,   151,   151,   151,   151,   -58,   -58,   152,   178,   182,
     155,   154,   -58,   158,   -58,   126,   -58,   -58,   -58,   126,
     160,   -58,   159,   161,   162,   163,   -58,   164,   -58,   166,
      56,   -58,   172,   176,    -1,   -58,   -58,   -58,   -58,   -58,
     126,   -58,   -58,   -58,    60,    60,    -8,   165,   -58,   179,
     -58,   -58,   -58,   -58,   181,   -58,   126,   183,   -58
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    38,     0,     0,     0,     0,     0,    23,     0,     7,
       9,    11,    13,     0,     0,     2,     0,     5,     0,    15,
       6,     0,     0,    33,    33,    33,    33,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     3,     0,     0,
       0,    41,     0,    18,    19,    20,    21,    22,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     4,    60,    61,    62,    63,    64,     0,    76,    75,
      65,    77,    66,    67,    42,    39,     0,     0,    63,    25,
      58,    59,     0,    73,    72,    74,     0,    68,     0,     0,
       0,    55,    56,    48,    76,    54,     0,    52,    57,     0,
       0,     0,     0,     0,     0,    31,    36,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,    51,    50,    82,
      84,     0,     0,     0,     0,    85,    83,     0,     0,     0,
       0,    35,     8,     0,    16,     0,    69,    70,    71,     0,
       0,    53,     0,     0,     0,     0,    40,     0,    37,     0,
      36,    17,     0,     0,     0,    78,    79,    80,    81,    32,
       0,    34,    10,    12,     0,     0,     0,     0,    47,     0,
      45,    46,    43,    44,     0,    24,     0,     0,    14
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -58,   -58,   -35,   -58,   -58,   -58,   -58,   -58,   -58,    -5,
     -58,   184,   105,    59,   -58,     0,   -58,   -52,    94,   -58,
     -58,   167,   168,   -57,   -51,   -58,    35,   -34,   -58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    14,    15,    16,    30,    31,    32,    33,   107,    17,
      28,   129,    43,   130,   131,    94,   167,    19,    96,    97,
      79,    69,    70,    20,    86,    87,    71,    88,    73
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    90,    61,    29,    72,    36,    89,    95,    99,     1,
      37,     1,    62,    63,     1,    91,    92,    23,   119,     1,
      83,    63,    41,    38,    84,    98,   100,   172,   173,    34,
      13,    24,     1,   102,   164,   165,   125,    18,    68,    25,
      67,    93,     1,    62,    63,    64,    65,    66,    67,    35,
       1,    62,    63,    26,    91,    92,    85,    85,    18,   136,
     137,    39,    40,   140,    95,     1,    62,    63,    27,    13,
       1,    67,    48,    49,    50,    51,    52,   108,   138,    67,
      21,    38,    98,    22,    13,    42,     1,    62,    63,    62,
      63,    64,    78,    66,    67,   110,   111,   168,    54,    55,
     152,   120,   133,   126,   153,    56,   121,   122,   123,   124,
      85,    85,    57,    58,    85,    67,     2,     3,     4,     5,
       6,     7,     8,    59,    60,   169,    76,    77,   132,    44,
      45,    46,    47,    74,    75,    18,     1,    82,   101,    18,
     103,   177,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,   104,   166,    13,   142,   143,   144,   145,
      18,     1,    62,    63,   170,   171,     2,     3,     4,     5,
       6,     7,     8,   105,   106,   -60,    18,   -76,   109,   112,
     113,   127,   114,   135,   139,   116,   115,   117,   118,   147,
     128,   134,   148,   160,   146,   149,   151,   150,   154,   155,
     162,   156,   157,   158,   163,   174,   159,   175,   176,   161,
     141,   178,    53,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    81
};

static const yytype_int16 yycheck[] =
{
       0,    58,    37,     8,    38,     0,    57,    59,    60,    10,
      38,    10,    11,    12,    10,    14,    15,    10,    14,    10,
      11,    12,    22,    31,    15,    59,    60,    35,    36,    10,
      29,    10,    10,    67,    35,    36,    14,    37,    38,    10,
      39,    40,    10,    11,    12,    13,    14,    15,    39,    30,
      10,    11,    12,    10,    14,    15,    56,    57,    58,   110,
     111,    10,    11,   114,   116,    10,    11,    12,    10,    29,
      10,    39,    16,    17,    18,    19,    20,    82,   112,    39,
      41,    31,   116,    44,    29,    41,    10,    11,    12,    11,
      12,    13,    14,    15,    39,    32,    33,   154,    31,    10,
     135,   101,   107,   103,   139,    39,     5,     6,     7,     8,
     110,   111,    39,    39,   114,    39,    16,    17,    18,    19,
      20,    21,    22,    39,    39,   160,    11,    10,    28,    24,
      25,    26,    27,    42,    42,   135,    10,    27,    45,   139,
      45,   176,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    41,   154,    29,   121,   122,   123,   124,
     160,    10,    11,    12,   164,   165,    16,    17,    18,    19,
      20,    21,    22,    42,    39,    34,   176,    34,    40,    34,
      40,    11,    38,    27,    27,    43,    40,    40,    40,    11,
      41,    38,    10,    27,    42,    40,    38,    43,    38,    40,
      28,    40,    40,    40,    28,    40,    42,    28,    27,   150,
     116,    28,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    29,    47,    48,    49,    55,    61,    63,
      69,    41,    44,    10,    10,    10,    10,    10,    56,    55,
      50,    51,    52,    53,    10,    30,     0,    38,    31,    10,
      11,    61,    41,    58,    58,    58,    58,    58,    16,    17,
      18,    19,    20,    57,    31,    10,    39,    39,    39,    39,
      39,    48,    11,    12,    13,    14,    15,    39,    61,    67,
      68,    72,    73,    74,    42,    42,    11,    10,    14,    66,
      67,    68,    27,    11,    15,    61,    70,    71,    73,    70,
      69,    14,    15,    40,    61,    63,    64,    65,    73,    63,
      73,    45,    73,    45,    41,    42,    39,    54,    55,    40,
      32,    33,    34,    40,    38,    40,    43,    40,    40,    14,
      61,     5,     6,     7,     8,    14,    61,    11,    41,    57,
      59,    60,    28,    55,    38,    27,    70,    70,    73,    27,
      70,    64,    72,    72,    72,    72,    42,    11,    10,    40,
      43,    38,    48,    48,    38,    40,    40,    40,    40,    42,
      27,    59,    28,    28,    35,    36,    61,    62,    69,    48,
      61,    61,    35,    36,    40,    28,    27,    48,    28
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    49,    51,
      49,    52,    49,    53,    49,    49,    54,    54,    55,    55,
      55,    55,    55,    56,    55,    55,    57,    57,    57,    57,
      57,    58,    58,    58,    59,    59,    59,    60,    61,    61,
      61,    61,    61,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    64,    64,    65,    65,    65,    65,    66,    66,
      67,    67,    68,    68,    68,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    72,    72,    73,    73,    73,
      73,    73,    74,    74,    74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     1,     0,     6,     0,
       8,     0,     8,     0,    12,     1,     2,     3,     3,     3,
       3,     3,     3,     0,    10,     4,     1,     1,     1,     1,
       1,     3,     6,     0,     3,     1,     0,     2,     1,     4,
       7,     3,     4,     2,     2,     2,     2,     1,     4,     5,
       5,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     5,     5,
       5,     5,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* progr: instructiuni  */
#line 30 "main.y"
                     {printf("program corect sintactic\n");}
#line 1376 "y.tab.c"
    break;

  case 7: /* $@1: %empty  */
#line 39 "main.y"
                         {addNodeToTree("class"); }
#line 1382 "y.tab.c"
    break;

  case 8: /* instructiune: CLASS $@1 ID BGIN declaratii END  */
#line 39 "main.y"
                                                                           {moveUpTree();}
#line 1388 "y.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 40 "main.y"
                      {addNodeToTree("if"); }
#line 1394 "y.tab.c"
    break;

  case 10: /* instructiune: IF $@2 '(' conditii ')' BGIN instructiuni END  */
#line 40 "main.y"
                                                                                      {moveUpTree();}
#line 1400 "y.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 41 "main.y"
                         {addNodeToTree("while"); }
#line 1406 "y.tab.c"
    break;

  case 12: /* instructiune: WHILE $@3 '(' conditii ')' BGIN instructiuni END  */
#line 41 "main.y"
                                                                                           {moveUpTree();}
#line 1412 "y.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 42 "main.y"
                       {addNodeToTree("for"); }
#line 1418 "y.tab.c"
    break;

  case 14: /* instructiune: FOR $@4 '(' atribuire ';' conditii ';' pas ')' BGIN instructiuni END  */
#line 42 "main.y"
                                                                                                             {moveUpTree();}
#line 1424 "y.tab.c"
    break;

  case 18: /* declaratie: INTTYPE ID dim  */
#line 50 "main.y"
                            { (yyvsp[-1].s)->type = strdup((yyvsp[-2].s)->type); (yyvsp[-1].s)->flagInit=0; if (!addSymToTree((yyvsp[-1].s))) {yyerror("Variabila declarata deja!");return -1;} (yyvsp[-1].s)->flagConst = 0; (yyval.s) = (yyvsp[-1].s); }
#line 1430 "y.tab.c"
    break;

  case 19: /* declaratie: FLOATTYPE ID dim  */
#line 51 "main.y"
                                      { (yyvsp[-1].s)->type = strdup((yyvsp[-2].s)->type); (yyvsp[-1].s)->flagInit=0; if (!addSymToTree((yyvsp[-1].s))) {yyerror("Variabila declarata deja!");return -1;} (yyvsp[-1].s)->flagConst = 0; (yyval.s) = (yyvsp[-1].s); }
#line 1436 "y.tab.c"
    break;

  case 20: /* declaratie: CHARTYPE ID dim  */
#line 52 "main.y"
                                     { (yyvsp[-1].s)->type = strdup((yyvsp[-2].s)->type); (yyvsp[-1].s)->flagInit=0; if (!addSymToTree((yyvsp[-1].s))) {yyerror("Variabila declarata deja!");return -1;} (yyvsp[-1].s)->flagConst = 0; (yyval.s) = (yyvsp[-1].s); }
#line 1442 "y.tab.c"
    break;

  case 21: /* declaratie: STRINGTYPE ID dim  */
#line 53 "main.y"
                                       { (yyvsp[-1].s)->type = strdup((yyvsp[-2].s)->type); (yyvsp[-1].s)->flagInit=0; if (!addSymToTree((yyvsp[-1].s))) {yyerror("Variabila declarata deja!");return -1;} (yyvsp[-1].s)->flagConst = 0; (yyval.s) = (yyvsp[-1].s); }
#line 1448 "y.tab.c"
    break;

  case 22: /* declaratie: BOOLTYPE ID dim  */
#line 54 "main.y"
                                     { (yyvsp[-1].s)->type = strdup((yyvsp[-2].s)->type); (yyvsp[-1].s)->flagInit=0; if (!addSymToTree((yyvsp[-1].s))) {yyerror("Variabila declarata deja!");return -1;} (yyvsp[-1].s)->flagConst = 0; (yyval.s) = (yyvsp[-1].s); }
#line 1454 "y.tab.c"
    break;

  case 23: /* $@5: %empty  */
#line 55 "main.y"
                              {addNodeToTree("Function"); }
#line 1460 "y.tab.c"
    break;

  case 24: /* declaratie: FUNCTION $@5 tip ID '(' params_sign ')' BGIN instructiuni END  */
#line 55 "main.y"
                                                                                                             {(yyvsp[-6].s)->type=strdup("Function");(yyvsp[-6].s)->value.funVal.returnType=strdup((yyvsp[-7].s)->type); if((yyvsp[-4].s)) (yyvsp[-6].s)->value.funVal.paramListHead = (yyvsp[-4].s); moveUpTree();if(!addFunctionSymToTree((yyvsp[-6].s))) {yyerror("FUNCTIE declarata deja cu aceeasi signatura!!!");return -1;} (yyvsp[-6].s)->flagConst = 0; }
#line 1466 "y.tab.c"
    break;

  case 25: /* declaratie: CONST declaratie ASSIGN const  */
#line 56 "main.y"
                                                   { if (strcmp((yyvsp[-2].s)->type, (yyvsp[0].s)->type)!=0) {yyerror("Tipul constantei nu este la fel cu tipul valorii date."); return -1; } (yyvsp[-2].s)->flagConst = 1; (yyvsp[-2].s)->value = (yyvsp[0].s)->value; (yyvsp[-2].s)->flagInit = 1;}
#line 1472 "y.tab.c"
    break;

  case 26: /* tip: INTTYPE  */
#line 59 "main.y"
              { (yyval.s) = (yyvsp[0].s);}
#line 1478 "y.tab.c"
    break;

  case 27: /* tip: FLOATTYPE  */
#line 60 "main.y"
                { (yyval.s) = (yyvsp[0].s);}
#line 1484 "y.tab.c"
    break;

  case 28: /* tip: CHARTYPE  */
#line 61 "main.y"
                   { (yyval.s) = (yyvsp[0].s);}
#line 1490 "y.tab.c"
    break;

  case 29: /* tip: STRINGTYPE  */
#line 62 "main.y"
                     { (yyval.s) = (yyvsp[0].s);}
#line 1496 "y.tab.c"
    break;

  case 30: /* tip: BOOLTYPE  */
#line 63 "main.y"
                   { (yyval.s) = (yyvsp[0].s);}
#line 1502 "y.tab.c"
    break;

  case 34: /* params_sign: param_sign ',' params_sign  */
#line 70 "main.y"
                                        {(yyval.s)=(yyvsp[-2].s); (yyvsp[-2].s)->next = (yyvsp[0].s); (yyvsp[-2].s)->flagInit=2;(yyvsp[-2].s)->flagConst=0;addSymToTree((yyval.s)); }
#line 1508 "y.tab.c"
    break;

  case 35: /* params_sign: param_sign  */
#line 71 "main.y"
                                {(yyval.s)=(yyvsp[0].s);(yyvsp[0].s)->next=NULL; (yyvsp[0].s)->flagInit=2;(yyvsp[0].s)->flagConst=0;addSymToTree((yyval.s));}
#line 1514 "y.tab.c"
    break;

  case 36: /* params_sign: %empty  */
#line 72 "main.y"
                     {(yyval.s)=NULL;}
#line 1520 "y.tab.c"
    break;

  case 37: /* param_sign: tip ID  */
#line 75 "main.y"
                    { (yyval.s) = (yyvsp[0].s); (yyval.s)->type=strdup((yyvsp[-1].s)->type);}
#line 1526 "y.tab.c"
    break;

  case 38: /* var_expr: ID  */
#line 78 "main.y"
              {struct Symbol *sym = symlookup((yyvsp[0].s)->name); if(sym == NULL) {yyerror("Variabila nedeclarata.");return -1;} (yyval.s)->type = sym->type; (yyval.s)->value=sym->value; (yyval.s)->flagInit = sym->flagInit; }
#line 1532 "y.tab.c"
    break;

  case 39: /* var_expr: ID '[' INT ']'  */
#line 79 "main.y"
                                  {struct Symbol *sym = symlookup((yyvsp[-3].s)->name); if(sym == NULL) {yyerror("Variabila nedeclarata.");return -1;} (yyval.s)->type = sym->type; (yyval.s)->value=sym->value;(yyval.s)->flagInit = sym->flagInit;}
#line 1538 "y.tab.c"
    break;

  case 40: /* var_expr: ID '[' INT ']' '[' INT ']'  */
#line 80 "main.y"
                                              {struct Symbol *sym = symlookup((yyvsp[-6].s)->name); if(sym == NULL) {yyerror("Variabila nedeclarata."); return -1;} (yyval.s)->type = sym->type; (yyval.s)->value=sym->value;(yyval.s)->flagInit = sym->flagInit;}
#line 1544 "y.tab.c"
    break;

  case 41: /* var_expr: ID '.' var_expr  */
#line 81 "main.y"
                               {struct Symbol *sym = symlookup((yyvsp[-2].s)->name); if(sym == NULL) {yyerror("Variabila nedeclarata.");return -1;} (yyval.s)->type = sym->type; (yyval.s)->value=sym->value; (yyval.s)->flagInit = sym->flagInit;}
#line 1550 "y.tab.c"
    break;

  case 42: /* var_expr: ID '[' ID ']'  */
#line 82 "main.y"
                             {struct Symbol *sym = symlookup((yyvsp[-3].s)->name); if(sym == NULL) {yyerror("Variabila nedeclarata.");return -1;} (yyval.s)->type = sym->type; (yyval.s)->value=sym->value; (yyval.s)->flagInit = sym->flagInit;}
#line 1556 "y.tab.c"
    break;

  case 48: /* apel: CALL ID '(' ')'  */
#line 92 "main.y"
                        {(yyval.s)=malloc(sizeof(struct Symbol*)); (yyval.s)->name=strdup((yyvsp[-2].s)->name); struct Symbol *sym = functionSymLookup((yyval.s)); if(sym == NULL) {yyerror("Functie nedeclarata.");return -1;} (yyval.s)->type=strdup(sym->value.funVal.returnType);}
#line 1562 "y.tab.c"
    break;

  case 49: /* apel: CALL ID '(' parametri ')'  */
#line 93 "main.y"
                                 {(yyval.s)=malloc(sizeof(struct Symbol*)); (yyval.s)->name=strdup((yyvsp[-3].s)->name);(yyval.s)->value.funVal.paramListHead = (yyvsp[-1].s); struct Symbol *sym = functionSymLookup((yyval.s)); if(sym == NULL) {yyerror("Functie nedeclarata.");return -1;} (yyval.s)->type=strdup(sym->value.funVal.returnType);}
#line 1568 "y.tab.c"
    break;

  case 50: /* apel: CALL PRINT '(' expr_aritm ')'  */
#line 94 "main.y"
                                     { if(strcmp((yyvsp[-1].s)->type,"Int")!=0) {yyerror("Print accepta doar parametru de tip Int");return -1;}printf("Rezultatul apelului functiei Print este: %d \n",(yyvsp[-1].s)->value.ival);(yyval.s)=(yyvsp[-1].s);}
#line 1574 "y.tab.c"
    break;

  case 51: /* apel: CALL PRINT '(' apel ')'  */
#line 95 "main.y"
                                   { if(strcmp((yyvsp[-1].s)->type,"Int")!=0) {yyerror("Print accepta doar parametru de tip Int");return -1;}printf("Rezultatul apelului functiei Print este: %d \n",(yyvsp[-1].s)->value.ival);(yyval.s)=(yyvsp[-1].s);}
#line 1580 "y.tab.c"
    break;

  case 52: /* parametri: parametru  */
#line 98 "main.y"
                      {(yyval.s) = (yyvsp[0].s);}
#line 1586 "y.tab.c"
    break;

  case 53: /* parametri: parametru ',' parametri  */
#line 99 "main.y"
                                    {(yyval.s) = (yyvsp[-2].s); (yyvsp[-2].s)->next = (yyvsp[0].s);}
#line 1592 "y.tab.c"
    break;

  case 55: /* parametru: STRING  */
#line 103 "main.y"
                           {(yyval.s)=(yyvsp[0].s);}
#line 1598 "y.tab.c"
    break;

  case 56: /* parametru: BOOL  */
#line 104 "main.y"
                         {(yyval.s)=(yyvsp[0].s);}
#line 1604 "y.tab.c"
    break;

  case 57: /* parametru: expr_aritm  */
#line 105 "main.y"
                       {(yyval.s)=(yyvsp[0].s);}
#line 1610 "y.tab.c"
    break;

  case 60: /* const_num: INT  */
#line 112 "main.y"
                {(yyval.s) = (yyvsp[0].s);}
#line 1616 "y.tab.c"
    break;

  case 61: /* const_num: FLOAT  */
#line 113 "main.y"
                          {(yyval.s) = (yyvsp[0].s);}
#line 1622 "y.tab.c"
    break;

  case 62: /* const_gen: CHAR  */
#line 116 "main.y"
                 {(yyval.s) = (yyvsp[0].s);}
#line 1628 "y.tab.c"
    break;

  case 63: /* const_gen: STRING  */
#line 117 "main.y"
                       {(yyval.s) = (yyvsp[0].s);}
#line 1634 "y.tab.c"
    break;

  case 64: /* const_gen: BOOL  */
#line 118 "main.y"
                     {(yyval.s) = (yyvsp[0].s);}
#line 1640 "y.tab.c"
    break;

  case 65: /* atribuire: var_expr ASSIGN const_gen  */
#line 121 "main.y"
                                       { 
			struct Symbol *sym = symlookup((yyvsp[-2].s)->name); 
			if (sym == NULL) {yyerror("Variabila nedeclarata!"); return -1;} 
			else if (strcmp(sym->type, (yyvsp[0].s)->type) !=0 ) {yyerror("Operatorii atribuirii nu sunt de acelasi tip!");return -1;}
			else if (sym->flagConst==1) {yyerror("Nu se poate modifica o constanta!"); return -1;}
			else copyValue(sym, (yyvsp[0].s));
			sym->flagInit=1; 
		  }
#line 1653 "y.tab.c"
    break;

  case 66: /* atribuire: var_expr ASSIGN expr_aritm  */
#line 129 "main.y"
                                                   { 
			struct Symbol *sym = symlookup((yyvsp[-2].s)->name); 
			if (sym == NULL) {yyerror("Variabila nedeclarata!"); return -1; } 
			else if (strcmp(sym->type, (yyvsp[0].s)->type) !=0 ) {yyerror("Operatorii atribuirii nu sunt de acelasi tip!");return -1;}
			else if (sym->flagConst==1) {yyerror("Nu se poate modifica o constanta!"); return -1;}
			else copyValue(sym, (yyvsp[0].s));
			sym->flagInit=1; 
										  
		 }
#line 1667 "y.tab.c"
    break;

  case 67: /* atribuire: var_expr ASSIGN op_string  */
#line 138 "main.y"
                                             { 
			struct Symbol *sym = symlookup((yyvsp[-2].s)->name); 
			if (sym == NULL) {yyerror("Variabila nedeclarata!"); return -1;} 
			else if (strcmp(sym->type, "String") !=0 ) {yyerror("Operatorii atribuirii nu sunt de acelasi tip!");return -1;}
			else if (sym->flagConst==1) {yyerror("Nu se poate modifica o constanta!"); return -1;}
			else copyValue(sym, (yyvsp[0].s));
			sym->flagInit=1; 
		 }
#line 1680 "y.tab.c"
    break;

  case 74: /* conditie: var_expr  */
#line 155 "main.y"
                            {if ((yyvsp[0].s)->flagInit==0) {yyerror("Variabila din dreapta nu a fost initializata explicit anterior"); return -1;}}
#line 1686 "y.tab.c"
    break;

  case 76: /* data_num: var_expr  */
#line 159 "main.y"
                            {if ((yyvsp[0].s)->flagInit==0) {yyerror("Variabila din dreapta nu a fost initializata explicit anterior"); return -1;}}
#line 1692 "y.tab.c"
    break;

  case 77: /* expr_aritm: data_num  */
#line 162 "main.y"
                      { (yyval.s) = (yyvsp[0].s); }
#line 1698 "y.tab.c"
    break;

  case 78: /* expr_aritm: '(' expr_aritm '+' data_num ')'  */
#line 163 "main.y"
                                             {(yyval.s) = computeRes('+', (yyvsp[-3].s), (yyvsp[-1].s)); if (!(yyval.s)) {yyerror("Doar Int/Float permis in expresii aritmetice");return -1;}}
#line 1704 "y.tab.c"
    break;

  case 79: /* expr_aritm: '(' expr_aritm '-' data_num ')'  */
#line 164 "main.y"
                                                     {(yyval.s) = computeRes('-', (yyvsp[-3].s), (yyvsp[-1].s)); if (!(yyval.s)) {yyerror("Doar Int/Float permis in expresii aritmetice");return -1;}}
#line 1710 "y.tab.c"
    break;

  case 80: /* expr_aritm: '(' expr_aritm '*' data_num ')'  */
#line 165 "main.y"
                                                     {(yyval.s) = computeRes('*', (yyvsp[-3].s), (yyvsp[-1].s)); if (!(yyval.s)) {yyerror("Doar Int/Float permis in expresii aritmetice");return -1;}}
#line 1716 "y.tab.c"
    break;

  case 81: /* expr_aritm: '(' expr_aritm '/' data_num ')'  */
#line 166 "main.y"
                                                     {(yyval.s) = computeRes('/', (yyvsp[-3].s), (yyvsp[-1].s)); if (!(yyval.s)) {yyerror("Doar Int/Float permis in expresii aritmetice");return -1;}}
#line 1722 "y.tab.c"
    break;

  case 82: /* op_string: STRING '~' STRING  */
#line 168 "main.y"
                              { (yyval.s) = malloc(sizeof(struct Symbol*)); (yyval.s)->type="String"; (yyval.s)->value.sval=malloc(MAX_S); strcpy((yyval.s)->value.sval,(yyvsp[-2].s)->value.sval); strcat((yyval.s)->value.sval, (yyvsp[0].s)->value.sval);}
#line 1728 "y.tab.c"
    break;

  case 83: /* op_string: var_expr '~' var_expr  */
#line 169 "main.y"
                                  { if(strcmp((yyvsp[-2].s)->type,"String")!=0 || strcmp((yyvsp[0].s)->type,"String")!=0) {yyerror("Una din variabile nu este un String"); return -1;} (yyval.s) = malloc(sizeof(struct Symbol*)); (yyval.s)->type="String"; (yyval.s)->value.sval=malloc(MAX_S); strcpy((yyval.s)->value.sval,(yyvsp[-2].s)->value.sval); strcat((yyval.s)->value.sval, (yyvsp[0].s)->value.sval);}
#line 1734 "y.tab.c"
    break;

  case 84: /* op_string: STRING '~' var_expr  */
#line 170 "main.y"
                                { if(strcmp((yyvsp[0].s)->type,"String")!=0) {yyerror("Variabila din dreapta nu este un String"); return -1;} (yyval.s) = malloc(sizeof(struct Symbol*)); (yyval.s)->type="String"; (yyval.s)->value.sval=malloc(MAX_S); strcpy((yyval.s)->value.sval,(yyvsp[-2].s)->value.sval); strcat((yyval.s)->value.sval, (yyvsp[0].s)->value.sval);}
#line 1740 "y.tab.c"
    break;

  case 85: /* op_string: var_expr '~' STRING  */
#line 171 "main.y"
                                { if(strcmp((yyvsp[-2].s)->type,"String")!=0) {yyerror("Variabila din stanga nu este un String"); return -1;} (yyval.s) = malloc(sizeof(struct Symbol*)); (yyval.s)->type="String"; (yyval.s)->value.sval=malloc(MAX_S); strcpy((yyval.s)->value.sval,(yyvsp[-2].s)->value.sval); strcat((yyval.s)->value.sval, (yyvsp[0].s)->value.sval);}
#line 1746 "y.tab.c"
    break;


#line 1750 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 173 "main.y"
	
int yyerror(char * s) {
	printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv) {
	struct Node *currNode = malloc(sizeof(struct Node));
	currNode->type = "global";
	yyin=fopen(argv[1],"r");
	yyparse();
	writeTreeToFile();
	deallocateMemory();
}
