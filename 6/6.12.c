#include <stdio.h>

int main() {
    int n, d;
    printf("Enter a number to check for primeness: ");
    scanf("%d", &n);
    
    for (d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            break;
        } 
    }

    printf((d * d) <= n ? "NOT PRIME" : "PRIME");

    return 0;
}