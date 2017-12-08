#include <stdio.h>

int main(void) {

    int var = 10;
    int *ptr = &var ;

    printf("變數 var 的位址：%p\n", &var);
    printf("指標 ptr 指向的位址：%p\n", ptr);
    printf("指標 ptr 儲存的值：%p\n", ptr);
    printf("取出 ptr 指向的記憶體位置之值：%d\n", *ptr);

    *ptr = 20;

    printf("var = %d\n", var);
    printf("*ptr = %d\n", *ptr);


    int var2 = 10;
    void *vptr = &var2 ;

    // void型態指標不可取值 
    // printf("%d\n", *vptr);

    // Type Casting to int pointer and assign to iptr 
    int *iptr = (int*) vptr;
    printf("%d\n", *iptr);

    return 0;
}
