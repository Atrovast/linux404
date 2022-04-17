#include <stdio.h>

#include "include/somemath.h"
#include "include/stack.h"
// #include "somemath.c"
// #include "stack.c"

int main() {
    Stack st = initStack(5);
    
    pushStack(&st, 2);
    pushStack(&st, 3);
    float a = CarmackSqrt(topStack(&st));
    popStack(&st);
    float b = CarmackSqrt(topStack(&st));
    printf("%f, %f, %d", a, b, sizeStack(&st));

    return 0;
}