#include <stdio.h>

int square(volatile int *var)
{
    int    local_var = *var;
    return local_var * local_var;
}

int main(void)
{
    int    var = 5;
    printf("result: %d\n", square(&var));

    return 0;
}
