#include <stdio.h>

// Checking primary diagonal matrix
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if(r == c) { // Checking square matrix
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(i+j == r-1) { // Condition for secondary diagonal
                    // At diagonal
                }
                else { // Outside of diagonal
                    if(a[i][j] != 0) {
                        flag = 2;
                        printf("This is not a secondary diagonal matrix\n");
                    }
                }
            }
        }

        if(flag == 1) {
            printf("This is a diagonal matrix\n");
        }
    }
    else {
        printf("This is not a secondary diagonal matrix.\n");
    }

    return 0;
}