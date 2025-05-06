#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int frequency[6] = {0};
    for(int i = 0; i < n; i++) {
        int value = a[i];
        frequency[value]++;
    }

    for(int i = 0; i < n; i++) {
        printf("%d -> %d\n", i, frequency[i]);
    }

    return 0;
}