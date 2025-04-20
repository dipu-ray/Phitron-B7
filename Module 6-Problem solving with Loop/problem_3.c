#include <stdio.h>

int main() {
    // Problem 3: D. Fixed Password
    int pass;

    while (scanf("%d", &pass)) {
        if(pass == 1999) {
            printf("Correct\n");
            break;
        }
        else {
            printf("Wrong\n");
        }
    }

    return 0;
}
