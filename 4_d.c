#include<stdio.h>

int main() {
    int check = 2;
    switch (check)
    {
    case 1:
        printf("D.W.Styen");
    case 2:
        printf("M.G.Johnson");
    case 3:
        printf("Mohammad Asif");
    
    default:
        printf("M.Muralidaran");
    }

    return 0; 
}

// In the main function, the value of check is set to 2. Since there is no break statement after case 2, all the names starting from case 2 will be printed.
