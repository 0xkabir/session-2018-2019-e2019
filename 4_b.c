#include<stdio.h>
int main() {
    char string[50];
    printf("Enter a string: ");
    scanf("%s", string);
    int i=0, len=0;
    while(string[i] != '\0') {
        len += 1;
        i++;
    }

    printf("The length of the given string is: %d", len);
    
}