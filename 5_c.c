#include<stdio.h>

int main() {
    int a, x;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    // Actual Answer
    if(a==0 || a==1) {
        x=50;
    }

    else if(a==2) {
        x=100;
    }
    else{
        x=0;
    }
// End of Answer

    printf("%d", x);

return 0;

}
