#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);

int split(int a[], int low, int high);

int main(void) {
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);

    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, N - 1); // mutates a

    printf("In sorted order: ");

    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void quicksort(int a[], int low, int high) {
    int middle;

    if (low >= high) {
        return;
    }

    middle = split(a, low, high); // mutates a
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high) {
    int part_element = a[low];

    for (;;) {
        while (low < high && part_element <= a[high]) { // find index of first element lower than part_element, moving rtl
            high--;
        } 
        if (low >= high) { // we're done if we hit the other side
            break;
        }
        a[low++] = a[high];

        while (low < high && a[low] <= part_element) { // find index of first element higher than part_element, moving ltr
            low++;
        }
        if (low >= high) {
            break;
        }
        a[high--] = a[low];
    }

    a[high] = part_element;
    return high;
}