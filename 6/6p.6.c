#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Even squares 1 to %d: \n", n);
    for (int i = 2; (i * i) <= n; i += 2) {
        printf("%d\n", i * i);
    }

    return 0;
}