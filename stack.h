#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

// Define Stack type using typedef
typedef struct Stack {
    struct Stack *prev;
    struct Stack *next;
    int value;
} Stack;

// Function prototypes
void addTop(Stack *cur, int val);
void popTop(Stack *cur);
void printStack(Stack *cur);

#endif // STACK_H
