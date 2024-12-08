#include "stack.h"
//to tez spk kodzi
void addTop(Stack *cur, int val) {
    if (cur->next == NULL) {
        cur->next = (Stack *)malloc(sizeof(Stack));
        cur->next->prev = cur;
        cur->next->next = NULL;
        cur->next->value = val;
    } else {
        addTop(cur->next, val);
    }
}

void popTop(Stack *cur) {
    if (cur->next == NULL) {
        if (cur->prev && cur->prev->next != NULL)
            cur->prev->next = NULL;
        free(cur);
    } else {
        popTop(cur->next);
    }
}

void printStack(Stack *cur) {
    printf("\nStruktura: ");
    while (cur != NULL) {
        printf("%d ", cur->value);
        cur = cur->next;
    }
}
