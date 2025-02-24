#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a > *(int*)b) - (*(int*)a < *(int*)b);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    qsort(a, n, sizeof(int), compare);
    int max = 0, next_max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            int t = max;
            max = a[i];
            next_max = t;
        }
    }
    *largest = max;
    *second_largest = next_max;

}

int main(void) {
    int a[11] = {10,1,2,3,4,5,6,7,8,9,0};

    int largest, second_largest;
    find_two_largest(a, 11, &largest, &second_largest);

    printf("%d %d", largest, second_largest);
}