#include <stdio.h>

int main() {
    int a = 1000000000; // int value stored 10^9. 4 bytes
    long long int b = 1000000000000000000; // long long int value stored 10^18. 8 bytes
    float x = 2.123456; // 4 bytes
    double y = 123456789.123456; // 8 bytes

    // printf("%d", b);
    // printf("%lld", b);
    // printf("%f", x);
    printf("%lf", y);
    return 0;
}