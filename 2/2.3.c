#include <stdio.h>

int main() {

    int height = 8;
    int length = 12;
    int width = 10;
    int volume = height * length * width;
    
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (in^3):%d\n", volume);
    printf("Dimensional weight (lb): %d\n", (volume + 165) / 166);

    return 0;
}