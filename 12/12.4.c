#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = contents;

void make_empty(void) {
    top_ptr = contents;
    printf("%p %p\n", top_ptr, contents);
}

bool is_empty(void) {
    return top_ptr == contents;
}

bool is_full(void) {
    printf("%p %p\n", top_ptr, contents + STACK_SIZE);
    return top_ptr == (contents + STACK_SIZE);
}

int main(void) {

    make_empty();
    is_full();
}