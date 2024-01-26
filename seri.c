#include <stdio.h>

int main() {
    int a = 2, b = 1, next;

    printf("%d, %d, ", a, b);

    while ((a + b) <= 3000) {
        next = a + b;
        printf("%d, ", next);
        a = b;
        b = next;
    }

}
