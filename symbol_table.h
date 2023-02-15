#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_NODES 500
#define MAX_S 1000

struct Symbol;

struct function {
    char* name;
    char* returnType;
    struct Symbol *paramListHead;
};

union Value {
    int ival;
    float fval;
    int bval;
    char cval;
    char* sval;
    struct function funVal;
};

struct Symbol {
    char *name;
    char *type;
    int flagInit;
    int flagConst;
    union Value value;
    struct Symbol *next;
};

struct Node {
    struct Node *parent;
    char *type;
    struct Symbol *listHead;
};

extern struct Node *nodes[MAX_NODES];
extern struct Node *currNode;
extern int n_nodes;

struct Symbol* computeRes(char op, struct Symbol *s1, struct Symbol *s2); 

struct Symbol* symlookup(char *name);

void addNodeToTree(char* nodeType);

void moveUpTree();

struct Symbol* functionSymLookup(struct Symbol *sym);

int addFunctionSymToTree(struct Symbol *sym);

int addSymToTree(struct Symbol *s);

void copyValue(struct Symbol* dest, struct Symbol* source);

void writeSymbolToFile(FILE *fd, struct Symbol *symbol);

void writeTreeToFile();

void deallocateMemory();

int isNumericType(struct Symbol *s);
