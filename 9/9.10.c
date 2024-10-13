#include <stdio.h>
#define N 5

int max_elem_arr(int a[], int n);
int avg_arr(int a[], int n);
int num_pos_arr(int a[], int n);

int max_elem_arr(int a[], int n) {
    int largest = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    return largest;
}

int avg_arr(int a[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum / n;
}

int num_pos_arr(int a[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            count++;
        }
    }

    return count;
}

int main(void) {
    int a[N];
    printf("Enter array of %d integers:", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    printf("Largest element: %d", max_elem_arr(a, N));
    printf("Average: %d", avg_arr(a, N));
    printf("Number of positive elements: %d", num_pos_arr(a, N));

    return 0;
}