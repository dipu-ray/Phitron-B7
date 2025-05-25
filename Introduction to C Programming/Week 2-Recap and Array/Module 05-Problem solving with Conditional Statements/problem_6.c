#include <stdio.h>

int main() {
    // Problem 6: K. Max and Min
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Minimum
    if(a <= b && a <= c) {
        printf("%d ", a);
    }
    else if(b <= a && b <= c) {
        printf("%d ", b);
    }
    else {
        printf("%d ", c);
    }

    // Maximum
    if(a >= b && a >= c) {
        printf("%d", a);
    }
    else if(b >= a && b >= c) {
        printf("%d", b);
    }
    else {
        printf("%d", c);
    }

    return 0;
}