#include <stdio.h>

int day_of_year(int month, int day, int year);

int day_of_year(int month, int day, int year) {
    int sum = 0;
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        months[1] = 29;
    }

    for (int i = 0; i < month - 1; i++) {
        sum += months[i]; 
    }

    sum += day;

    return sum;
}

int main() {
    int m, d, y;
    
    printf("Enter month day year to get day of year: ");
    scanf("%d %d %d", &m, &d, &y);
    printf("Day of year: %d", day_of_year(m, d, y));

    return 0;
}