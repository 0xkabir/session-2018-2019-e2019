#include<stdio.h>

int main() {
    int grade;
    printf("Enter the marks: ");
    scanf("%d", &grade);
    switch (grade/10)
    {
    case 10:
    case 9:
        printf("A+");
        break;
    case 8:
        printf("A");
        break;
    case 7:
        printf("B");
        break;
    case 6:
        printf("C");
        break;
    case 5:
        printf("D");
        break;
    default:
        printf("F");
        break;
    }

    return 0;
}