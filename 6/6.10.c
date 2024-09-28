#include <stdio.h>

int main() {
    int i;
    // Loop that skips 5
    for (i = 0; i < 10; i++) {
        if (i == 5) { continue; }
        printf("%d", i);
    }
    printf("\n");

    // Equivalent loop with goto
    for (i = 0; i < 10; i++) {
        if (i == 5) { goto end; }
        printf("%d", i);
        end: {}
    }
    printf("\n");
    
    return 0;
}