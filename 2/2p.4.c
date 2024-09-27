#include <stdio.h>

int main() {
    float amount;

    printf("Amount: $");
    scanf("%f", &amount);
    printf("With 5%% tax, %.2f", amount * 1.05f);

    return 0;
}