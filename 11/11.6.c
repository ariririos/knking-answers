#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void) {
    int N = 10;
    int a[N] = {};

    printf("Enter %d integers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    int largest, second_largest;
    find_two_largest(a, N, &largest, &second_largest);

    printf("largest: %d\nsecond largest: %d\n", largest, second_largest);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    qsort(a, n, sizeof(int), compare);
    *largest = a[n-1];
    *second_largest = a[n-2];

}

int compare(const void *a, const void *b) {
    return (*(int*)a > *(int*)b) - (*(int*)a < *(int*)b);
}
