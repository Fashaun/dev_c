#include <stdio.h>
#include <stdlib.h> /* rand() */
#include <time.h> /* time function */

int main () {

    /*Set seed*/
    srand( time(NULL));

    int x = rand();

    printf("x = %d\n",x);
    return 0;
}
