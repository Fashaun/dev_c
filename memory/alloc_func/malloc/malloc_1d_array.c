#include <stdio.h>
#include <stdlib.h>
int main() {
    // 用來管理動態記憶體的指標
    int *dynArr;

    // 指定空間大小
    int arrLen = 10;

    // 取得記憶體空間 (存 10 個 int 的 空間)
    dynArr = malloc( arrLen * sizeof(int) );

    if( dynArr == NULL ) {
        // 無法取得記憶體空間
        fprintf(stderr, "Error: unable to allocate required memory\n");
        return 1;
    } else {
        printf("變數 arrLen 的位址：%p\n", &arrLen); 
        printf("start from address %p", dynArr);
    }

    // 使用動態取得的記憶體空間
    int i;
    for (i = 0; i < arrLen; ++i) {
        dynArr[i] = i; // 存 int
        printf("%d \n", dynArr[i]);
    }

    // 釋放記憶體空間
    free(dynArr);

    return 0;
}
