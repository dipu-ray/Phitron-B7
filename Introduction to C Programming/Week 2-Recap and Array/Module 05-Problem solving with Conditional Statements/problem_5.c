#include <stdio.h>

int main() {
    // Problem 5: M. Capital or Small or Digit
    char x;
    scanf("%c", &x);

    if(x >= '0' && x <= '9') {
        printf("IS DIGIT\n");
    }
    
    else {
        printf("ALPHA\n");

        if(x >= 'A' && x <= 'Z') {
            printf("IS CAPITAL\n");
        }
        else {
            printf("IS SMALL\n");
        }
    }

    return 0;
}