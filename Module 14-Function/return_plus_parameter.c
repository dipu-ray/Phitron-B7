#include <stdio.h>

// First Program. The output: Blank
// int summation(int num1, int num2) {
//     int ans = num1 + num2;
//     return ans;
// }

// int main() {
//     summation(10, 5);

//     return 0;
// }



// Second Program. The output: 10 5 100
// int summation(int num1, int num2, int num3) {
//     printf("%d %d %d", num1, num2, num3);
//     int ans = num1 + num2;
//     return ans;
// }

// int main() {
//     summation(10, 5, 100);

//     return 0;
// }



// Third Program. The output: 15
// int summation(int num1, int num2) {
//     int ans = num1 + num2;
//     return ans;
// }

// int main() {
//     int value = summation(10, 5);
//     printf("%d", value);

//     return 0;
// }



// Fourth Program. The output: 15 300
int summation(int num1, int num2) {
    int ans = num1 + num2;
    return ans;
}

int main() {
    int value = summation(10, 5);
    int value2 = summation(100, 200);
    printf("%d %d", value, value2);

    return 0;
}