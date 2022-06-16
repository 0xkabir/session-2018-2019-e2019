#include<stdio.h>

int main() {
    int x, y, z;
    x = '1'-'0';
    y = 'a'-'b';
    z = x+y;
    printf("%d", z);

    return 0;
}

// There is no error in the given program.

// Explanation:
//The value of '1' evaluates to 49 and value of '0' evaluates to 48, so '1'-'0' evaluates to 1. On the other hand, the value of 'a' evaluates to 97 and value of 'b' evaluates to 98, so 'a'-'b' evaluates to -1. Hence the value of x+y evaluates to 0.