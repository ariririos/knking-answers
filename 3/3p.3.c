#include <stdio.h>

int main() {
    int gs1, grp, pub, item, chk;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &grp, &pub, &item, &chk);
    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", grp);
    printf("Publisher code: %d\n", pub);
    printf("Item number: %d\n", item);
    printf("Check digit: %d\n", chk);

    return 0;
}