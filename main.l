%{
#include <stdio.h>
#include "y.tab.h"
%}

%option noyywrap

%%
"Int" {yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "Int"; return INTTYPE;}
"Float" { yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "Float"; return FLOATTYPE;}
"Char" { yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "Char"; return CHARTYPE;}
"String" { yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "String"; return STRINGTYPE;}
"Bool" {yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "Bool"; return BOOLTYPE;}
"Function" {yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "Function"; return FUNCTION;}
"Class" {return CLASS;} 
"If" {return IF;}
"Else" {return ELSE; }
"While" {return WHILE; }
"For" {return FOR;}
"Const" {return CONST;}
"Begin" {return BGIN;}
"End" {return END;}
"Call" {return CALL;}
"Print" {return PRINT;}
"True" { yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "Bool"; yylval.s->value.bval = 1; return BOOL;}
"False" { yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "Bool"; yylval.s->value.bval = 0; return BOOL;}
[_a-zA-Z][_a-zA-Z0-9]* {  yylval.s = malloc(sizeof(struct Symbol)); yylval.s->name = strdup(yytext); return ID;}
\"([^\\\"]|\\.)*\" { yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "String"; yylval.s->value.sval = strdup(yytext); yylval.s->value.sval[strlen(yylval.s->value.sval)-1]='\0'; yylval.s->value.sval=yylval.s->value.sval+1; return STRING;}
\'([^\\\"]|\\.)\' { yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "Char"; yylval.s->value.cval = yytext[1]; return CHAR;}
"=" {return ASSIGN;}
0|[1-9]|[1-9][0-9]+ { yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "Int"; yylval.s->value.ival = atoi(yytext); return INT;}
0"."[0-9]+|[1-9][0-9]*"."[0-9]+ { yylval.s = malloc(sizeof(struct Symbol)); yylval.s->type = "Float"; yylval.s->value.fval = atof(yytext); return FLOAT;}
"&&" { return AND; }
"||" { return OR; }
[<>]|"<="|">="|"==" { return COMP_OP;}
"++" {return INCREMENT_OP; }
"--" {return DECREMENT_OP; }
[ \t] ;
\n {yylineno++; }
. {return yytext[0]; }
