#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    // scanf("%d", &a[0][0]);
    // scanf("%d", &a[0][1]);
    // scanf("%d", &a[0][2]);
    // scanf("%d", &a[1][0]);
    // scanf("%d", &a[1][1]);
    // scanf("%d", &a[1][2]);
    // scanf("%d", &a[2][0]);
    // scanf("%d", &a[2][1]);
    // scanf("%d", &a[2][2]);

    // printf("%d ", a[0][0]);
    // printf("%d ", a[0][1]);
    // printf("%d ", a[0][2]);
    // printf("%d ", a[1][0]);
    // printf("%d ", a[1][1]);
    // printf("%d ", a[1][2]);
    // printf("%d ", a[2][0]);
    // printf("%d ", a[2][1]);
    // printf("%d ", a[2][2]);



    // Make it with nested loop
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}