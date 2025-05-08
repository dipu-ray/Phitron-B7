#include <stdio.h>

void func(char s[], int n) {
    printf("%s", s);
}

int main() {
    char s[10];
    scanf("%s", &s);
    func(s, 10);

    return 0;
}