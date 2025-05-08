#include <stdio.h>

void func(int x) {
    int x = 20;
    printf("Func function x variable address: %p\n", x);
}

int main() {
    int x = 10;
    func(x);
    // printf("%d", x);
    printf("Main function x variable address: %p\n", x);

    return 0;
}