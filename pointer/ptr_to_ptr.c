#include <stdio.h>
#include <stdlib.h>

int main() {

    int A = 42;
    int* pA = &A;
    // variable address of pA (pointer variable)
    int** ppA = &pA;
    int*** pppA = &ppA;
    
    printf("print variable : %d\n", A);
    printf("print *pA: %d\n", *pA);
    printf("print **ppA: %d\n", **ppA);
    printf("print *pppA: %d\n", ***pppA);

    return EXIT_SUCCESS;
}
