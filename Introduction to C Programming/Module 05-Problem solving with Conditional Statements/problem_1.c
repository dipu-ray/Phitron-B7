#include <stdio.h>

int main() {
    // Problem 1: I. Welcome for you with condition
    int A, B;
    scanf("%d %d", &A, &B);

    if(A >= 0 && B <= 100) {
        if(A >= B) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }

    return 0;
}