#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i = i + 1) { // (i = i + 1) short form is (i += 1)
        printf("Hello world!\n");
    }
    return 0;
}