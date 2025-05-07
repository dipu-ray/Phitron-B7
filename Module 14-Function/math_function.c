#include <stdio.h>
#include <math.h>

int main() {
    int ceil_function = ceil(4.5);
    int floor_function = floor(4.5);
    int round_function = round(4.5);
    int sqrt_function = sqrt(16);
    int pow_function = pow(3,2);
    int abs_function = abs(-10);

    printf("%d\n", ceil_function);
    printf("%d\n", floor_function);
    printf("%d\n", round_function);
    printf("%d\n", sqrt_function);
    printf("%d\n", pow_function);
    printf("%d\n", abs_function);

    return 0;
}