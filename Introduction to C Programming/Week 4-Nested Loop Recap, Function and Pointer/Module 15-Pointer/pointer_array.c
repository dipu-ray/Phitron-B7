#include <stdio.h>

int main() {
    // int a[5] = {10, 20, 30, 40, 50};

    // printf("%p\n", &a[0]); // Size 4 bytes
    // printf("%p\n", &a[1]); // Size 4 bytes
    // printf("%p\n", &a[2]); // Size 4 bytes
    // printf("%p\n", &a[3]); // Size 4 bytes
    // printf("%p\n", &a[4]); // Size 4 bytes



    // int a[5] = {10, 20, 30, 40, 50};

    // printf("%p\n", &a[0]); // same output of address
    // printf("%p\n", a); // same output of address
    // printf("%d\n", *a); // dereference - print of value



    // int a[5] = {10, 20, 30, 40, 50};
    // *a = 100;
    // for(int i = 0; i < 5; i++) {
    //     printf("%d ", a[i]); // Output: 100, 20, 30, 40, 50
    // }



    int a[5] = {10, 20, 30, 40, 50};
    *(a + 1) = 100;
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]); // Output: 10, 100, 30, 40, 50
    }

    return 0;
}