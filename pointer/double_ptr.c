#include <stdio.h>

int main(void) {
    int p = 10;
    int *ptr = &p;

    printf("value of p: %d\n", p);
    printf("memory address of p:%p\n", &p);
    printf("*ptr 參照的值:%d\n", *ptr);

    printf("ptr 儲存的位址值:%p\n", ptr);
    printf("ptr 的記憶體位置:%p\n", &ptr);

    // double pointer
    
    int p1 = 10;
    int *ptr1 = &p1;
    int **ptr2 = &ptr1;

    printf("p 的值：%d\n", p1);
    printf("p的記憶體位置:%p\n\n", &p1);

    printf("*ptr1 = %d\n", *ptr1);
    printf("ptr1 = %p\n", ptr1);
    printf("ptr1 的記憶體位置:%p\n\n", &ptr1);

    printf("**ptr2 = %d\n", **ptr2);
    printf("*ptr2 = %p\n", *ptr2);
    printf("ptr2 = %p\n\n", ptr2);

    puts("整理(誰儲存了誰？)：");
    printf("&p = %p\tprt1 = %p\n", &p, ptr1);
    printf("&ptr1 = %p\tprt2 = %p\n", &ptr1, ptr2);
    
    return 0;
}
