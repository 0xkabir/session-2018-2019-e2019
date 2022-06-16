#include<stdio.h>
#include<math.h>

int main() {
    int num, temp, check_arm=0, rem;
    printf("Enter a number to check: ");
    scanf("%d", &num);
    temp = num;
    while (temp!=0) {
        rem = temp%10;
        check_arm = check_arm + pow(rem, 3);
        temp /=10;
    }

    if(num == check_arm) {
        printf("The given number is an armstrong number.");
    }

    else {
        printf("The given number is not an armstrong number.");
    }

    return 0;
    
}