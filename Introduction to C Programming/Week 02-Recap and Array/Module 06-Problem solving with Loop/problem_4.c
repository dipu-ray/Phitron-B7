#include <stdio.h>
#include <limits.h> // To add for min value

int main() {
    // Problem 4: E. Max
    int n;
    scanf("%d", &n);
    int max = INT_MIN; // To add header file <limits.h>

    for(int i = 1; i <= n; i++) {
        int value;
        scanf("%d", &value);
        if(value > max) {
            max = value;
        }
    }

    printf("%d", max);

    return 0;
}
