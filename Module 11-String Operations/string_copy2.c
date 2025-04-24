#include <stdio.h>
#include <string.h>

int main() {
    int a[101], b[101];
    scanf("%s %s", &a, &b);

    // This is build in function for array copy.
    strcpy(a, b);

    printf("%s %s", a, b);

    return 0;
}