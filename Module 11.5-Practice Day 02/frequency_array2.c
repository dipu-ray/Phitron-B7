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
        if(a[i] == 0) {
            frequency[0]++;
        }
        else if(a[i] == 1) {
            frequency[1]++;
        }
        else if(a[i] == 2) {
            frequency[2]++;
        }
        else if(a[i] == 3) {
            frequency[3]++;
        }
        else if(a[i] == 4) {
            frequency[4]++;
        }
        else if(a[i] == 5) {
            frequency[5]++;
        }
    }

    printf("%d -> %d\n", 0, frequency[0]);
    printf("%d -> %d\n", 1, frequency[1]);
    printf("%d -> %d\n", 2, frequency[2]);
    printf("%d -> %d\n", 3, frequency[3]);
    printf("%d -> %d\n", 4, frequency[4]);
    printf("%d -> %d\n", 5, frequency[5]);

    return 0;
}