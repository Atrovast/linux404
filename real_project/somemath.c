#include "include/somemath.h"

float CarmackSqrt(int x) {
    float y = (float)x;
    int i = * ( int * ) &y;
    i = 0x5f375a86 - ( i >> 1 );
    y  = * ( float * ) &i;
    y = y * ( 1.5 - ( x*0.5 * y * y ) );
    y = y * ( 1.5 - ( x*0.5 * y * y ) );

    return 1 / y;
}

double pown(double a, int n) {
    if (n < 0) {
        return 1 / pown(a, -n);
    }
    double res = 1.0;
    while(n) {
        if(n & 1) res *= a;
        a *= a;
        n >>= 1;
    }
    return res;
}

double deciE(double x){
    // Maclaurin's series
    return 1 + x + x * x / 2 + pown(x, 3) / 6 + pown(x, 4) / 24 + pown(x, 5) / 120;
}

double exp(double x) {
    if (x < 0) {
        return 1 / exp(-x);
    }
    int n = (int)x;
    x -= n;
    double e1 = pown(e, n);
    double e2 = deciE(x);
    return e1 * e2;
}
