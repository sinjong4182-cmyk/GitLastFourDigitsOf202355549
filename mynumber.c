#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");
   
    for (int i = 2; i <= 100; i++) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) printf("%d ", i);
    }
    printf("\n");

    return 0;
}
