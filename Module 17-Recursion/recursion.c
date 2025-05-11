#include <stdio.h>

void hello() { // Whole proccess call to recursion
    printf("Hello\n");
    hello(); // Recursive function
}

int main() {
    printf("Hi\n");
    hello();

    return 0;
}