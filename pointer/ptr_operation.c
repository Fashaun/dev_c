#include <stdio.h>

int main(void) {

    int *ptr1 = 0;
    double *ptr2 = 0;

    // Operation on memory address
    printf("ptr 位置：%p\n", ptr1);
    printf("ptr + 1：%p\n", ptr1 + 1); // output: 0x4 (size of int: 4bytes)
    printf("ptr + 2：%p\n", ptr1 + 2); // output: 0x8


    printf("ptr + 1：%p\n", ptr1 + 1); // output: 0x8 (size of double: 8bytes)
    printf("ptr + 2：%p\n", ptr1 + 2); // output: 0x10

    return 0;
}
