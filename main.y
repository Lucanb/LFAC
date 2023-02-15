%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}

%code requires {
	#include "symbol_table.h"
}

%union {
    struct Symbol* s;
	struct Node *n;
}

%left  '|'
%left  '&'
%left  '+'  '-'
%left  '*'  '/'  '%'

%token <s> ID INT FLOAT CHAR STRING BOOL 
%token <s> INTTYPE FLOATTYPE CHARTYPE STRINGTYPE BOOLTYPE FUNCTION 
%token CONST CLASS IF WHILE FOR BGIN END CALL PRINT ASSIGN AND OR COMP_OP INCREMENT_OP DECREMENT_OP ELSE

%type <s> const const_gen const_num data_num expr_aritm declaratie atribuire var_expr params_sign param_sign op_string parametri parametru apel tip

%start progr
%%
progr : instructiuni {printf("program corect sintactic\n");}
      ;

instructiuni : instructiune ';' 
	  	     | instructiune ';' instructiuni 
	         ;

instructiune : declaratie 
	     	 | atribuire 
	     	 | CLASS {addNodeToTree("class"); } ID BGIN declaratii END {moveUpTree();}
	         | IF {addNodeToTree("if"); } '(' conditii ')' BGIN instructiuni END  {moveUpTree();}
	         | WHILE {addNodeToTree("while"); }'(' conditii ')' BGIN instructiuni END  {moveUpTree();}
	     	 | FOR {addNodeToTree("for"); } '(' atribuire ';' conditii ';' pas ')' BGIN instructiuni END {moveUpTree();}
             | apel 
		     ;

declaratii : declaratie ';' 
           | declaratii declaratie ';'
           ;

declaratie : INTTYPE ID dim { $2->type = strdup($1->type); $2->flagInit=0; if (!addSymToTree($2)) {yyerror("Variabila declarata deja!");return -1;} $2->flagConst = 0; $$ = $2; }
		   | FLOATTYPE ID dim { $2->type = strdup($1->type); $2->flagInit=0; if (!addSymToTree($2)) {yyerror("Variabila declarata deja!");return -1;} $2->flagConst = 0; $$ = $2; }
		   | CHARTYPE ID dim { $2->type = strdup($1->type); $2->flagInit=0; if (!addSymToTree($2)) {yyerror("Variabila declarata deja!");return -1;} $2->flagConst = 0; $$ = $2; }
		   | STRINGTYPE ID dim { $2->type = strdup($1->type); $2->flagInit=0; if (!addSymToTree($2)) {yyerror("Variabila declarata deja!");return -1;} $2->flagConst = 0; $$ = $2; }
		   | BOOLTYPE ID dim { $2->type = strdup($1->type); $2->flagInit=0; if (!addSymToTree($2)) {yyerror("Variabila declarata deja!");return -1;} $2->flagConst = 0; $$ = $2; }
 		   | FUNCTION {addNodeToTree("Function"); } tip ID '(' params_sign ')' BGIN instructiuni END {$4->type=strdup("Function");$4->value.funVal.returnType=strdup($3->type); if($6) $4->value.funVal.paramListHead = $6; moveUpTree();if(!addFunctionSymToTree($4)) {yyerror("FUNCTIE declarata deja cu aceeasi signatura!!!");return -1;} $4->flagConst = 0; }
		   | CONST declaratie ASSIGN const { if (strcmp($2->type, $4->type)!=0) {yyerror("Tipul constantei nu este la fel cu tipul valorii date."); return -1; } $2->flagConst = 1; $2->value = $4->value; $2->flagInit = 1;}
		   ;

tip : INTTYPE { $$ = $1;}
    | FLOATTYPE { $$ = $1;}
	| CHARTYPE { $$ = $1;}
	| STRINGTYPE { $$ = $1;}
	| BOOLTYPE { $$ = $1;}
	;

dim : '[' INT ']' 
	| '[' INT ']' '[' INT ']'
	| ;

params_sign: param_sign ',' params_sign {$$=$1; $1->next = $3; $1->flagInit=2;$1->flagConst=0;addSymToTree($$); } 
		   | param_sign {$$=$1;$1->next=NULL; $1->flagInit=2;$1->flagConst=0;addSymToTree($$);}
		   | {$$=NULL;}
		   ;

param_sign : tip ID { $$ = $2; $$->type=strdup($1->type);}
		   ;

var_expr : ID {struct Symbol *sym = symlookup($1->name); if(sym == NULL) {yyerror("Variabila nedeclarata.");return -1;} $$->type = sym->type; $$->value=sym->value; $$->flagInit = sym->flagInit; }
		 | ID '[' INT ']' {struct Symbol *sym = symlookup($1->name); if(sym == NULL) {yyerror("Variabila nedeclarata.");return -1;} $$->type = sym->type; $$->value=sym->value;$$->flagInit = sym->flagInit;}
		 | ID '[' INT ']' '[' INT ']' {struct Symbol *sym = symlookup($1->name); if(sym == NULL) {yyerror("Variabila nedeclarata."); return -1;} $$->type = sym->type; $$->value=sym->value;$$->flagInit = sym->flagInit;}
	     | ID '.' var_expr {struct Symbol *sym = symlookup($1->name); if(sym == NULL) {yyerror("Variabila nedeclarata.");return -1;} $$->type = sym->type; $$->value=sym->value; $$->flagInit = sym->flagInit;}
	     | ID '[' ID ']' {struct Symbol *sym = symlookup($1->name); if(sym == NULL) {yyerror("Variabila nedeclarata.");return -1;} $$->type = sym->type; $$->value=sym->value; $$->flagInit = sym->flagInit;}
         ;

pas : var_expr INCREMENT_OP 
    | var_expr DECREMENT_OP
    | INCREMENT_OP var_expr
    | DECREMENT_OP var_expr
    | atribuire
    ;

apel : CALL ID '(' ')'  {$$=malloc(sizeof(struct Symbol*)); $$->name=strdup($2->name); struct Symbol *sym = functionSymLookup($$); if(sym == NULL) {yyerror("Functie nedeclarata.");return -1;} $$->type=strdup(sym->value.funVal.returnType);}
     | CALL ID '(' parametri ')' {$$=malloc(sizeof(struct Symbol*)); $$->name=strdup($2->name);$$->value.funVal.paramListHead = $4; struct Symbol *sym = functionSymLookup($$); if(sym == NULL) {yyerror("Functie nedeclarata.");return -1;} $$->type=strdup(sym->value.funVal.returnType);}
     | CALL PRINT '(' expr_aritm ')' { if(strcmp($4->type,"Int")!=0) {yyerror("Parametru gresit!");return -1;}printf("Rezultatul apelului functiei Print este: %d \n",$4->value.ival);$$=$4;}
	 | CALL PRINT '(' apel ')' { if(strcmp($4->type,"Int")!=0) {yyerror("Parametru gresit!");return -1;}printf("Rezultatul apelului functiei Print este: %d \n",$4->value.ival);$$=$4;}
     ;

parametri : parametru {$$ = $1;}
          | parametru ',' parametri {$$ = $1; $1->next = $3;}
          ;

parametru : apel
	  	  | STRING {$$=$1;}
	  	  | BOOL {$$=$1;}
     	  | expr_aritm {$$=$1;}
	      ;

const : const_num 
      | const_gen
      ;

const_num : INT {$$ = $1;}
	 	  | FLOAT {$$ = $1;}
	      ;

const_gen : CHAR {$$ = $1;}
	      | STRING {$$ = $1;}
	      | BOOL {$$ = $1;}
	      ;

atribuire :  var_expr ASSIGN const_gen { 
			struct Symbol *sym = symlookup($1->name); 
			if (sym == NULL) {yyerror("Variabila nedeclarata!"); return -1;} 
			else if (strcmp(sym->type, $3->type) !=0 ) {yyerror("Operatorii atribuirii nu sunt de acelasi tip!");return -1;}
			else if (sym->flagConst==1) {yyerror("Nu se poate modifica o constanta!"); return -1;}
			else copyValue(sym, $3);
			sym->flagInit=1; 
		  } 
		  |	var_expr ASSIGN expr_aritm { 
			struct Symbol *sym = symlookup($1->name); 
			if (sym == NULL) {yyerror("Variabila nedeclarata!"); return -1; } 
			else if (strcmp(sym->type, $3->type) !=0 ) {yyerror("Operatorii atribuirii nu sunt de acelasi tip!");return -1;}
			else if (sym->flagConst==1) {yyerror("Nu se poate modifica o constanta!"); return -1;}
			else copyValue(sym, $3);
			sym->flagInit=1; 
										  
		 } 
		 | var_expr ASSIGN op_string { 
			struct Symbol *sym = symlookup($1->name); 
			if (sym == NULL) {yyerror("Variabila nedeclarata!"); return -1;} 
			else if (strcmp(sym->type, "String") !=0 ) {yyerror("Operatorii atribuirii nu sunt de acelasi tip!");return -1;}
			else if (sym->flagConst==1) {yyerror("Nu se poate modifica o constanta!"); return -1;}
			else copyValue(sym, $3);
			sym->flagInit=1; 
		 } 	  	 
		 ;
conditii : conditie
	 	 | conditie AND conditii
	 	 | conditie OR conditii
	 	 ;

conditie : expr_aritm COMP_OP expr_aritm
		 | BOOL
		 | INT 
		 | var_expr {if ($1->flagInit==0) {yyerror("Variabila din dreapta nu a fost initializata explicit anterior"); return -1;}}
		 ;

data_num : const_num
		 | var_expr {if ($1->flagInit==0) {yyerror("Variabila din dreapta nu a fost initializata explicit anterior"); return -1;}}
		 ;
		 
expr_aritm : data_num { $$ = $1; }
           | '(' expr_aritm '+' data_num ')' {$$ = computeRes('+', $2, $4); if (!$$) {yyerror("Doar Int/Float permis in expresii aritmetice");return -1;}}
		   | '(' expr_aritm '-' data_num ')' {$$ = computeRes('-', $2, $4); if (!$$) {yyerror("Doar Int/Float permis in expresii aritmetice");return -1;}}
		   | '(' expr_aritm '*' data_num ')' {$$ = computeRes('*', $2, $4); if (!$$) {yyerror("Doar Int/Float permis in expresii aritmetice");return -1;}}
		   | '(' expr_aritm '/' data_num ')' {$$ = computeRes('/', $2, $4); if (!$$) {yyerror("Doar Int/Float permis in expresii aritmetice");return -1;}}
		   ;
op_string : STRING '~' STRING { $$ = malloc(sizeof(struct Symbol*)); $$->type="String"; $$->value.sval=malloc(MAX_S); strcpy($$->value.sval,$1->value.sval); strcat($$->value.sval, $3->value.sval);} 
	  | var_expr '~' var_expr { if(strcmp($1->type,"String")!=0 || strcmp($3->type,"String")!=0) {yyerror("Una din variabile nu este un String"); return -1;} $$ = malloc(sizeof(struct Symbol*)); $$->type="String"; $$->value.sval=malloc(MAX_S); strcpy($$->value.sval,$1->value.sval); strcat($$->value.sval, $3->value.sval);} 
	  | STRING '~' var_expr { if(strcmp($3->type,"String")!=0) {yyerror("Variabila din dreapta nu este un String"); return -1;} $$ = malloc(sizeof(struct Symbol*)); $$->type="String"; $$->value.sval=malloc(MAX_S); strcpy($$->value.sval,$1->value.sval); strcat($$->value.sval, $3->value.sval);} 
	  | var_expr '~' STRING { if(strcmp($1->type,"String")!=0) {yyerror("Variabila din stanga nu este un String"); return -1;} $$ = malloc(sizeof(struct Symbol*)); $$->type="String"; $$->value.sval=malloc(MAX_S); strcpy($$->value.sval,$1->value.sval); strcat($$->value.sval, $3->value.sval);} 
	  ;
%%	
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
