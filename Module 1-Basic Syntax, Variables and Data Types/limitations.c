#include <stdio.h>

int main() {
    int a = 1000000000; // int value stored 10^9. 4 bytes
    long long int b = 1000000000000000000LL; // long long int value stored 10^18. 8 bytes
    float x = 2.123456f; // 4 bytes
    double y = 123456789.123456; // 8 bytes

    // printf("a = %d\n", a);
    // printf("b = %lld\n", b);
    // printf("x = %f\n", x);
    printf("y = %lf\n", y);

    return 0;
}