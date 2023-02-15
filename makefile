all: 
	yacc -d -Wno-yacc main.y
	lex main.l
	gcc symbol_table.c lex.yy.c y.tab.c -o main