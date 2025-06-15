#include <stdio.h>

// First Program
// void summation(int a, int b) {
//     int ans = a + b;
//     printf("%d", ans);
// }

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     summation(a, b);

//     return 0;
// }



// Second Program. The output: Blank
void summation(int a, int b) {
    int ans = a + b;
    return; // return also work to similar to break statement
    printf("%d", ans);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    summation(a, b);

    return 0;
}