#include <stdio.h>

int main() {
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100 || grade < 0) {
        printf("Out of range");
        return 1;
    }

    printf("Letter grade: ");
    switch (grade / 10) {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
        default:
            printf("F");
            break;
    }
    printf("\n");

    return 0;
}