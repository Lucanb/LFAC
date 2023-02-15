#include "symbol_table.h"

struct Node *nodes[MAX_NODES];
struct Node *currNode;
int n_nodes = 0;

struct Symbol* computeRes(char op, struct Symbol *s1, struct Symbol *s2) {
    struct Symbol* s = malloc(sizeof(struct Symbol*));
    s->type=malloc(10);
    if (strcmp(s1->type, "Int") == 0 && strcmp(s2->type, "Int") == 0) {
        if (op == '+') s->value.ival = s1->value.ival + s2->value.ival;
        else if (op == '-') s->value.ival = s1->value.ival - s2->value.ival;
        else if (op == '*') s->value.ival = s1->value.ival * s2->value.ival;
        else if (op == '/') s->value.ival = s1->value.ival / s2->value.ival;
	strcpy(s->type,"Int");
    }
    else if (strcmp(s1->type, "Float") == 0 && strcmp(s2->type, "Float") == 0) {
        if (op == '+') s->value.fval = s1->value.fval + s2->value.fval;
        else if (op == '-') s->value.fval = s1->value.fval - s2->value.fval;
        else if (op == '*') s->value.fval = s1->value.fval * s2->value.fval;
        else if (op == '/') s->value.fval = s1->value.fval / s2->value.fval;
	strcpy(s->type,"Float");
    }
    else if (strcmp(s1->type, "Float") == 0 && strcmp(s2->type, "Int") == 0) {
        if (op == '+') s->value.fval = s1->value.fval + s2->value.fval;
        else if (op == '-') s->value.fval = s1->value.fval - s2->value.ival;
        else if (op == '*') s->value.fval = s1->value.fval * s2->value.ival;
        else if (op == '/') s->value.fval = s1->value.fval / s2->value.ival;
	strcpy(s->type,"Float");
    }
    else if (strcmp(s1->type, "Int") == 0 && strcmp(s2->type, "Float") == 0) {
        if (op == '+') s->value.fval = s1->value.fval + s2->value.fval;
        else if (op == '-') s->value.fval = s1->value.ival - s2->value.fval;
        else if (op == '*') s->value.fval = s1->value.ival * s2->value.fval;
        else if (op == '/') s->value.fval = s1->value.ival / s2->value.fval;
	strcpy(s->type,"Float");
    }
    else return NULL;
    return s;
}

struct Symbol* symlookup(char *name) {
    struct Node *start = currNode;
    while (start != NULL) {
        struct Symbol *s = start->listHead;
        while (s != NULL) {
            if (strcmp(s->name, name) == 0)
                return s;
            s = s->next;
        }
        start = start->parent;
    }
    return NULL;
}


void addNodeToTree(char* nodeType) {
    struct Node *node = malloc(sizeof(struct Node*));
    node->type = strdup(nodeType);
    node->parent = currNode; 
    currNode = node;
    nodes[n_nodes++] = node;
}

void moveUpTree() { 
    currNode = currNode->parent;
}


struct Symbol* functionSymLookup(struct Symbol *sym) {
    struct Node *start = currNode;
    while (start != NULL) {
        struct Symbol *s = start->listHead;
	
        while (s != NULL) { 
	    int ok=1;
	    if (strcmp(s->type, "Function") == 0 && strcmp(sym->name, s->name)==0) {
            	struct Symbol *param = s->value.funVal.paramListHead;
		struct Symbol *paramOriginal = sym->value.funVal.paramListHead;
		
		while (param != NULL && paramOriginal != NULL) {	
			if (strcmp(param->type, paramOriginal->type) !=0 ) {ok=0;break;}
			param = param->next; paramOriginal = paramOriginal->next;
		}
		if (param==NULL && paramOriginal ==NULL && ok==1) return s;
	    }
            s = s->next;
        }
        start = start->parent;
    }
    return NULL;
}


int addFunctionSymToTree(struct Symbol *sym) {
    if(functionSymLookup(sym)) return 0;

    if (currNode == NULL) 
        addNodeToTree("global");
    sym->next = currNode->listHead;
    currNode->listHead = sym;
    return 1;
}

int addSymToTree(struct Symbol *s) {
    if (symlookup(s->name) != NULL)
        return 0;
    if (currNode == NULL) 
        addNodeToTree("global");
    s->next = currNode->listHead;
    currNode->listHead = s;
    return 1;
}

void copyValue(struct Symbol* dest, struct Symbol* source) {
    if (strcmp(source->type, "String") == 0) {
	if (dest->value.sval) free(dest->value.sval);
	dest->value.sval = malloc(MAX_S);
        strcpy(dest->value.sval,strdup(source->value.sval));
    }
    else 
	{
        dest->value = source->value;	
	}
}

void writeSymbolToFile(FILE *fd, struct Symbol *symbol) {
    char *type = symbol->type;
    if (strcmp(symbol->type, "Function") != 0) {
        fprintf(fd, "Variable %s: Type = %s, Value = ", symbol->name, type);
        if (symbol->flagInit==1) { 
            if (strcmp(type, "Int") == 0) 
                fprintf(fd, "%d", symbol->value.ival);
            else if (strcmp(type, "Float") == 0) 
                fprintf(fd, "%f", symbol->value.fval);
            else if (strcmp(type, "Bool") == 0) 
                fprintf(fd, "%d", symbol->value.bval);
            else if (strcmp(type, "Char") == 0) 
                fprintf(fd, "'%c'", symbol->value.cval);
            else if (strcmp(type, "String") == 0) 
                fprintf(fd, "\"%s\"", symbol->value.sval);
            if (symbol->flagConst==1)
	            fprintf(fd," - constant");
      }else{
        if (symbol->flagInit==2) 
            fprintf(fd, "parameter");
        else 
            fprintf(fd, "unintialized");
      } 
    }
    else if (strcmp(type, "Function") == 0) {
        fprintf(fd, "Function %s: Parameters = (", 
                symbol->name);
	struct Symbol *curr_symbol = symbol->value.funVal.paramListHead;
        while(curr_symbol) {
            fprintf(fd, "%s ", curr_symbol->type);
	    curr_symbol = curr_symbol->next;	
	}
        fprintf(fd, ")");
    }
    fprintf(fd, "\n");

}

void writeTreeToFile() {
    FILE *fd = fopen("symbol_table.txt", "w");
    if (fd == NULL) {
        printf("Error opening symbol_table.txt");
        return;
    }
    for (int i = 0; i < n_nodes; i++) {
        struct Node *currNode = nodes[i];
        if (currNode) {
            struct Symbol *currSymbol = currNode->listHead;
            fprintf(fd, "Defined inside %s:\n", currNode->type);
            while (currSymbol != NULL) {
                writeSymbolToFile(fd, currSymbol);
                currSymbol = currSymbol->next;
            }
            fprintf(fd, "\n");
        }
    }
    fclose(fd);
}

void deallocateMemory() {
    for (int i = n_nodes - 1; i >= 0; i--) {
        struct Node *currNode = nodes[i];
        if (currNode) {
            struct Symbol *currSymbol = currNode->listHead;
            while (currSymbol != NULL) {
                struct Symbol *tempSymbol = currSymbol;
                currSymbol = currSymbol->next;
                free(tempSymbol);
            }
            free(currNode);
        }
    }
}

int isNumericType(struct Symbol *s)
{
	if(strcmp(s->type,"Int") || strcmp(s->type,"Float"))
		return 1;
	return 0;
}
