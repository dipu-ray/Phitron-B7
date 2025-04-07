#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);

    if (money >=100) {
        printf("Travel with car.");
    }

    else if (money >= 50) {
        printf("Travel with bike.");
    }

    else {
        printf("I'll sleep.");
    }

    return 0;
}