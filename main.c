#include <stdio.h>
#include <stdlib.h>
#include "stackLib.h"

int main(){
    int stackCapacity  = 5;
    Stack *stack;

    stack = createStack(stackCapacity);
    pop(stack);
    printStack(stack);
    push(11,stack);
    printStack(stack);
    push(10,stack);
    printStack(stack);
    push(19,stack);
    printStack(stack);
    pop(stack);
    printStack(stack);
    push(14,stack);
    printStack(stack);
    push(15,stack);
    printStack(stack);
    pop(stack);
    printStack(stack);
    printf("\nTop:%14i\n",top(stack));

        
    free(stack);

    return 0;
}