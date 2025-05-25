#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        // This conditon for even numbers
        // if(i % 2 == 0) {
        //     printf("%d\n", i);
        // }

        // This condition for odd numbers
        // if(i % 2 != 0) {
        //     printf("%d\n", i);
        // }

        // OR
        // if(i % 2 == 1) {
        //     printf("%d\n", i);
        // }
    }

    // Show to 1 - odd and 2 - even in c program in 1 to 10
    for(int i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            printf("%d - Even\n", i);
        }
        else {
            printf("%d - Odd\n", i);
        }
    }

    return 0;
}