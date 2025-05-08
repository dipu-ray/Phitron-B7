#include <stdio.h>

void func(int* p) {
    *p = 20;
}

int main() {
    int x = 10;
    func(&x);
    printf("%d", x); // The output: 20

    return 0;
}