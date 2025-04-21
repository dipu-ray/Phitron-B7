#include <stdio.h>

int main() {
    // Problem 3: P. First digit
    int x;
    scanf("%d", &x);

    if(x > 999 && x <= 9999) {
        int new_x = x / 1000;

        if(new_x % 2 == 0) {
            printf("EVEN\n");
        }
        else {
            printf("ODD\n");
        }
    }

    return 0;
}