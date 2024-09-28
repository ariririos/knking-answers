#include <stdio.h>

int main() {
    int days, week_start;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &week_start);

    for (int i = 1; i < week_start; i++) {
        printf("   ");
    }

    for (int i = 0; i < days; i++) {
        printf("%3d", i + 1);
        if (7 - i % 7 == week_start) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}