#include <stdio.h>

int main() {
    int s[10];
    printf("%d\n", s[4]); // Have a garbage value
    scanf("%s", &s);
    printf("%s\n", s);
    printf("%d\n", s[4]); // Have a null value

    return 0;
}