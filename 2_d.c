#include<stdio.h> 
int main() {
    int a=10, b=25;
    a = b++ + a++;
    b = ++b + ++a;
    printf("%d %d\n", a, b);
}

// In the line 4, post-increment is applied on the digits. As the value of a is already assigned in that line, so the value of a will be 35; only the value of b will increase by one and will be set to 26.
// In the line 5, pre-increment is applied on the integers and both the values of a and b increases by 1 and then added together. Hence the value of a will be 36 and the value of b will be 63. 