#include <stdio.h>

void pb(int n);

void pb(int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

int main(void) {
    int n;

    printf("n: ");
    scanf("%d", &n);
    printf("pb(n): ");
    pb(n);

    return 0;
}