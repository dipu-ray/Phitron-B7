#include <stdio.h>

int main() {
    // This is infinity loop, never try...
    // You can try in online compiler
    for(int i = 1; i >= 1; i++) {
        printf("%d\n", i);
    }

    return 0;
}