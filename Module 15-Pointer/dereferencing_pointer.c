#include <stdio.h>

int main() {
    int x;
    printf("%d\n", x);
    printf("%p\n", &x);

    int* ptr;
    ptr = &x;
    *ptr = 200;
    printf("%p\n", ptr);
    printf("%d\n", *ptr); // Accessing a variable value
    printf("%d\n", x); // Change the value with dereferences

    return 0;
}