#include <stdio.h>
#define N 10
double ident[N][N] = {0.0};

int main(void) {
    double *p;

    for (p = ident[0]; p < (ident[0] + N * N); p += N + 1) {
        *p = 1.0;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.1f ", ident[i][j]);
        }
        printf("\n");
    }
    return 0;
}