#include <stdio.h>
#define POW(X, Y) \
({ \
    int i, r = 1; \
    for (i = 0; i < Y; ++i) \
    r *= X; \
    r; \
})
int main(void)
{
    int result;
    result = POW(2, 3);
    printf("Result: %d\n", result);
}
