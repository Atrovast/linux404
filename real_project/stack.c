#include "include/stack.h"
#include <assert.h>
#include <stdlib.h>

Stack initStack(int n) {
    assert(n > 0 && n <= 2147483647);

    Stack _Stack;
    _Stack.capacity = n;
    _Stack.size = 0;
    _Stack.data = (int *)malloc( n * sizeof(int) );

    return _Stack;
}

int pushStack(Stack* s, int element) {
    if (s->size >= s->capacity) {
        return 0;
    }
    else {
        s->data[s->size++] = element;
        return 1;
    }
}

int topStack(Stack* s) {
    if (s->size > 0) {
        return s->data[s->size - 1];
    }
    else {
        return 0;
    }
}

void popStack(Stack* s) {
    if (s->size > 0) {
        --s->size;
    }
}

int isEmptyStack(Stack* s) {
    if (s->size == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void clearStack(Stack* s) {
    s->size = 0;
}

int sizeStack(Stack* s) {
    return s->size;
}

int capacityStack(Stack* s) {
    return s->capacity;
}
