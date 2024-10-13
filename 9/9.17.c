#include <stdio.h>

int fact(int n);

int fact(int n) {
    int result = 1;

    for (int i = n; i > 0; i--) {
        result *= i;
    }

    return result;
}

int main(void) {
    int n;

    printf("n: ");
    scanf("%d", &n);
    printf("n!: %d", fact(n));

    return 0;
}