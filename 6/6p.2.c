#include <stdio.h>

int main() {
    int i, j;

    printf("Enter two integers: ");
    scanf("%d %d", &i, &j);

    while (j != 0) {
        int remainder = i % j;
        i = j;
        j = remainder;
    }

    printf("Greatest common divisor: %d\n", i);

    return 0;
}