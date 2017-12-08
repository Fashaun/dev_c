#include <stdio.h>

int func_witout_arg(void);
char func_with_arg(int, char);

int main(void) {

    int (*ptr1)() = foo; // link to function declare

    func_witout_arg();
    ptr1();

    printf("address of foo:%p\n", func_witout_arg);
    printf("address of ptr:%p\n", ptr1);

    char (*ptr2)(int, char) = func_with_arg;
    ptr2(3, 'c');
    printf("address of foo2(int, char): %p\n", ptr2);

    return 0;
}

int func_witout_arg(void) {
    puts("function pointer");
    return 0;
}

char func_with_arg(int n, char c) {
    printf("func_with_arg(int, char): %d\t%c\n", n, c);
    return c;
}
