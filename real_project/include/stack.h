#ifndef _STACK_H
#define _STACK_H

struct Stack{
    int size, capacity;
    int *data;
};
typedef struct Stack Stack;

Stack initStack(int n);

int pushStack(Stack* s, int element);

int topStack(Stack* s);

void popStack(Stack* s);

int isEmptyStack(Stack* s);

void clearStack(Stack* s);

int sizeStack(Stack* s);

int capacityStack(Stack* s);

#endif // _STACK_H
