#include <stdio.h>

int main() {
    int h24, m, h12;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h24, &m);
    h12 = h24 % 12;
    if (h12 == 0) {
        h12 = 12;
    }
    printf("Equivalent 12-hour time: %d:%.2d", h12, m);
    printf(h24 < 12 ? "AM" : "PM");

    return 0;
}