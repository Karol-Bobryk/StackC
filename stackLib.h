typedef struct{
    int *values;
    int capacity;
    int size;

} Stack;

Stack *createStack(int);
void push(int, Stack *);
void pop(Stack *);
int top(Stack *stack);
void printStack(Stack *stack);