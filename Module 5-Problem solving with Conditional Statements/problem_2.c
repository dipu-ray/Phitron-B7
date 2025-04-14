#include <stdio.h>

int main() {
    // Problem 2: J. Multiples
    int a, b;
    scanf("%d %d", &a, &b);

    if(a % b == 0 || b % a == 0) {
        printf("Multiples\n");
    }
    else {
        printf("No Multiples\n");
    }

    return 0;
}