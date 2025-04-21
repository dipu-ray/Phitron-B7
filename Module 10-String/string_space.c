#include <stdio.h>

int main() {
    char s[50];

    printf("Enter a string: ");
    // gets(s);  // Dangerous, but works in older compilers
    fgets(s, 16, stdin); // Standard way
    printf("You entered: %s\n", s);

    return 0;
}