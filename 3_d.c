#include<stdio.h>

int main(){
    char arr[7] = "Network Network";
    printf("%s", arr);
    return 0;
}

// In the main function, the size of the character array is set to 7 which is less than the size of the string assigned to the array. Hence it will cause an error and as a result there will be no output.