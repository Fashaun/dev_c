#include <stdio.h>

int square(volatile int *var)
{
    // *var will get not newest value
    return *var **var;
}



int main(void)
{
    int var = 5;

    printf("result: %d\n", square(&var));
    return 0;
}
