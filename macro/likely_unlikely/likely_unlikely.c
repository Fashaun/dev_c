#include <stdio.h>
#include <stdlib.h>
 
#define likely(x)    __builtin_expect(!!(x), 1)
#define unlikely(x)  __builtin_expect(!!(x), 0)

// User gcc -O2 to compile 
// Use objdump -S for debugging

int main(int argc, char *argv[])
{
    int a;
 
    /*獲取GCC無法優化的值*/
    a  = atoi(argv[1]);
 
    if (likely(a != 2)) {
        a++;
    }
    
    printf("%d\n", a);
 
    return 0;
}
