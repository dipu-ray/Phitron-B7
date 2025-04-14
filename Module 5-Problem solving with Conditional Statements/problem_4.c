#include <stdio.h>

int main() {
    // Problem 4: N. Char
    char x;
    scanf("%c", &x);

    if(x >= 'a' && x <= 'z') {
        x = x - 32;
        printf("%c\n", x);
    }
    else {
        x = x + 32;
        printf("%c\n", x);
    }

    return 0;
}