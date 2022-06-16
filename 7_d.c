#include<stdio.h>

int main() {
    int a = 100, b = 74;
    if(a++ > 100 && b++ > 200) {
        printf("High values with a = %d b = %dn", a, b);
    }

    if(a++ < 100 || b++ < 200) {
        printf("Low values with a = %d b = %dn", a, b);
    }

    return 0;
}

// In the first if statement, only the value of a is increased with post increment because of the && operator. As the first condition evaluates to false, the second is not checked and hence the value of a is 101 and the value of b is 74 after the first if statement.

// In the second statement, both the values of a and b is checked because of the || operator and both a and b values increases by one. Hence the value of a is 102 and the value of b is 75 after the second if statement.

// So the final output of the given proram will be "Low values with a = 102 b = 75n."