#include<stdio.h>

int main() {
    int number, reverse_number=0, remainder;
    printf("Enter an even number: ");
    scanf("%d", &number);

    if(number%2==0){
        while (number!=0)
        {
            remainder = number%10;
            reverse_number = reverse_number*10 + remainder;
            number /= 10;
        }

    printf("The reverse number is: %d", reverse_number);

    }

    else {
        printf("The number is an odd number.");
    }

    return 0;
}
