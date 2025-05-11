#include <stdio.h>

void hello(int i) {
    if(i == 6) {
        return;
    }

    hello(i+1);
    printf("%d\n", i); // Make this reverse
}

int main() {
    int i = 1;
    hello(i);

    return 0;
}