#include <stdio.h>

int main() {
    int speed;

    printf("Enter wind speed in knots: ");
    scanf("%d", &speed);
    
    printf("Beaufort scale description: ");

    if (speed < 1) {
        printf("Calm");
    }
    else if (speed < 3) {
        printf("Light air");
    }
    else if (speed < 27) {
        printf("Breeze");
    }
    else if (speed < 47) {
        printf("Gale");
    }
    else if (speed < 63) {
        printf("Storm");
    }
    else {
        printf("Hurricane");
    }

    printf("\n");
    
    return 0;
}