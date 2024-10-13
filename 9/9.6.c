#include <stdio.h>
#include <math.h>

int digits(int n, int k);

int digits(int n, int k) {
    for (int i = 1; i < k; i++) { // cut down n to the kth-from-right place
        n /= 10;
    }

    return n % 10; // return only the rightmost digit
}

int main(void) {
    int n, k;

    printf("digit(n, k): ");
    scanf("%d %d", &n, &k);
    printf("digit(n, k) = %d", digits(n, k));

    return 0;
}