#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);

    if(money >= 5000) {
        printf("I'll go to Cox's Bazar.\n");
        if(money >= 10000) {
            printf("Then I'll go to Sain Martin.\n");
        }
        else {
            printf("Back to home.\n");
        }
    }

    else {
        printf("Don't go to anywhere.\n");
    }

    return 0;
}