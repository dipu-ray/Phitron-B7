#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    for(int i = 0; i <= n-1; i++) {
        for(int j = i+1; j < n; j++) {
            printf("%d %d", a[i], a[j]);
        }
    }

    return 0;
}