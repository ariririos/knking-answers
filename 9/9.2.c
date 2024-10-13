#include <stdio.h>

int check(int x, int y, int n);

int check(int x, int y, int n) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    int x, y, n;

    printf("Check if 0 <= x < n and 0 <= y < n:\nx:");
    scanf("%d", &x);
    printf("y:");
    scanf("%d", &y);
    printf("n:");
    scanf("%d", &n);

    printf("Result: %d", check(x, y, n));
}