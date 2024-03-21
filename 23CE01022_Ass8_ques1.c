#include <stdio.h>

void circularShift(int *x, int *y, int *z) {
    int temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}

int main() {
    int a = 5, b = 8, c = 10;
    
    printf("Before circular shifting: a=%d, b=%d, c=%d\n", a, b, c);
    
    circularShift(&a, &b, &c);
    
    printf("After circular shifting: a=%d, b=%d, c=%d\n", a, b, c);
    
    return 0;
}