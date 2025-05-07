#include <stdio.h>

int y = 100; // This is global variable. Use or access to anywhere.

int summation() {
    int x = 20;
    printf("Summation function -> %d\n", x); // They have different variables

    return 0;
}

int main() {
    int x = 10;
    printf("Main function -> %d\n", x); // They have different variables
    summation();

    return 0;
}