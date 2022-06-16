#include<stdio.h>

void main() {
    int n=9, div=0;
    div=n/0;
    printf("result = %d", div);
}

// In the main function, n is divided by 0 which will cause a runtime error.