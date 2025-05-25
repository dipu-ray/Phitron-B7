#include <stdio.h>

int main() {
    char letter = 'A';
    int age = 19;
    age = 20;
    float pi = 3.14;

    printf("%c\n", letter);
    printf("%d\n", age);
    printf("%f\n", pi); // By default it's show six numbers after float
    printf("%.2f\n", pi); //Control float numbers

    return 0;
}