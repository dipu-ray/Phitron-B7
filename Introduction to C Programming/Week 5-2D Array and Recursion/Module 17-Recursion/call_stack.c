#include <stdio.h>

void mello() {
    printf("mello\n");
}

void gello() {
    printf("gello\n");
    mello();
}

void hello() {
    printf("Hello\n");
    gello();
}

int main() {
    printf("Hi\n");
    hello();

    return 0;
}