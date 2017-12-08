#include <stdio.h>

#define LENGTH1 10
#define LENGTH2 5

int main(void) {

    int arr1[10] = {0};

    printf("arr :\t\t%p\n", arr1);
    printf("&arr[0] :\t%p\n", &arr1[0]);

    //陣列的索引其實是相對於第一個記憶體位址的位移量
    int arr2[LENGTH1] = {0};
    int *ptr2 = arr2;

    for(int i = 0; i < LENGTH1; i++) {
        printf("&arr[%d]: %p", i ,&arr2[i]);
        printf("\t\tptr + %d: %p\n", i, ptr2 + i);
    }

    //
    int arr3[LENGTH2] = {10, 20, 30, 40, 50};
    int *ptr3 = arr3;

    // 以指標方式存取資料 
    for(int i = 0; i < LENGTH2; i++) {
        printf("*(ptr + %d): %d\n", i , *(ptr3 + i));
    }
    putchar('\n');

    // 以陣列方式存取資料 
    for(int i = 0; i < LENGTH2; i++) {
        printf("ptr[%d]: %d\n", i, ptr3[i]);
    }
    putchar('\n');

    // 以指標方式存取資料 
    for(int i = 0; i < LENGTH2; i++) {
        printf("*(arr + %d): %d\n", i , *(arr3 + i));
    }

    // 以陣列方式存取資料 
    for(int i = 0; i < LENGTH2; i++) {
        printf("arr[%d]: %d\n", i, arr3[i]);
    }
    putchar('\n');


    return 0;
}
