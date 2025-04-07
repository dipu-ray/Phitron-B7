#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);

    if(money >= 100) {
        printf("I will eat burger.");
    }

    else {
        printf("I won't eat burger.");
    }

    return 0;
}