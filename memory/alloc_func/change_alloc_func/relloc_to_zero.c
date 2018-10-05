#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr = (int*) malloc(16);

    // 釋放記憶體，等同於 free(ptr)
    realloc(ptr, 0);

    return 0;
}
