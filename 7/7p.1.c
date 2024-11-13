/* Prints a table of squares using a for statement */
#include <stdio.h>
int main(void) {
    // int is a signed 32-bit integer, max safe n = 46340 
    // short is a signed 16-bit integer, max safe n = 181
    // long is a signed 64-bit integer, max safe n = 365301557878814

    long i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);

    for (i = n; i <= n; i++) {
        printf("%10ld %10ld\n", i, i * i);
    }

    return 0;
}