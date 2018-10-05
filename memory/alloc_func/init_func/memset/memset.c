#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int *dynArr;
    int arrLen = 10;
    // 配置未初始化的記憶體空間
    dynArr = malloc( arrLen * sizeof(int) );
    if( dynArr == NULL ) {
        fprintf(stderr, "Error: unable to allocate required memory\n");
        return 1;
    }

    // 將記憶體初始化為 0
    memset(dynArr, 0, arrLen * sizeof(int));
    int i;
    for (i = 0; i < arrLen; ++i) {
        printf("%d ", dynArr[i]);
    }

    free(dynArr);

    return 0;
}
