#include <stdio.h>
#include <stdlib.h>
#include "stackLib.h"


Stack *createStack(int stackCapacity){

    Stack *newStack;
    newStack -> values = (int *)malloc(sizeof(int)*stackCapacity);
    
    newStack -> size = 0;
    newStack -> capacity = stackCapacity;

    for(int i=0 ; i<stackCapacity  ; i++)
    {
        *(newStack->values + i) = 0;
    }


    
    return newStack;
}
void push(int value, Stack *stack){
    if(stack -> size == stack -> capacity)
    {
        return;
    }
    for(int i = stack-> size ; i>=0 ; i--)
    {
        *(stack -> values + i + 1) = *(stack -> values + i);
    }
    *(stack -> values) = value; 
    stack -> size += 1;
}

void pop(Stack *stack){
    if(!stack -> size)
    {
        return;
    }
    *(stack -> values) = 0; 
    for(int i = 0 ; i<= stack-> size ; i++)
    {
        *(stack -> values + i) = *(stack -> values + i + 1);
    }
    *(stack -> values + stack -> capacity - 1) = 0;
    stack -> size -= 1;
}
int top(Stack *stack){
    if(!stack->size){
        return 0;
    }
    return *(stack -> values);
}
void printStack(Stack *stack){

    printf("Stack of size:\t");
    printf("%i / ", stack -> size);
    printf("%i \n", stack->capacity);

    for(int i=0 ; i<stack->capacity ; i++)
    {
        printf("%i",i);
        printf("%17i \n", *(stack->values + i)); 
    }    
}