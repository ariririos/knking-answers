#include <stdio.h>

int main() {
    int i = 1, j = 0;
    printf("%i", i < j ? -1 : (i == j ? 0 : 1));

    return 0;
}