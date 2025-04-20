#include <stdio.h>

int main() {
    char a[10];
    scanf("%s", &a);
    printf("%s\n", a);
    printf("%c\n", a[0]); // Check to index number
    printf("%d", a[8]); // Check to null or garbage value.
    // VScode show to null and online compiler show to garbage value

    return 0;
}