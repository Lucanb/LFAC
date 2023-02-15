/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 53 "y.tab.h"

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

#line 138 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
