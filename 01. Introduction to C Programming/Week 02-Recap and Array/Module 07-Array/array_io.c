#include <stdio.h>

int main() {
    // // That's not a proper way or correct way
    // int a[5];
    // scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3] ,&a[4]);
    // printf("%d %d %d %d %d", a[0], a[1], a[2], a[3] ,a[4]);

    // The proper way or correct way
    int a[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; i++) {
        printf("%d", a[i]);
    }

    return 0;
}