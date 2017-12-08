#include <stdio.h>
#include "sort.h"

void print_array(int*, int);

int main(void) {
    int number1[] = {3, 5, 1, 6, 9};
    sort(number1, 5, ascending);
    printf("大的在前 ");
    print_array(number1, 5);

    int number2[] = {3, 5, 1, 6, 9};
    sort(number2, 5, descending);
    printf("小的在前 ");
    print_array(number2, 5);

    return 0;
}

void print_array(int *arr, int len) {
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}
