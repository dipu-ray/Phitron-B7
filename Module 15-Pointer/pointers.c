#include <stdio.h>

int main() {
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x);

    int* ptr; // This is pointer variable
    ptr = &x;
    printf("%p\n", ptr);
    printf("%p\n", &ptr); // Address of pointer variable

    return 0;
}