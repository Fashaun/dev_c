#include <limits.h>
#include <stdio.h>
void bit_pattern(int u)
{
    int i, x, word;
    unsigned mask = 1;
    word = CHAR_BIT * sizeof(int);
    mask = mask << (word - 1);
    for(i = 1; i <= word; i++)
    {
        x = (u & mask) ? 1 : 0;
        printf("%d", x);
        mask >>= 1;
        /* shift 1 to the leftmost position */
        /* identify the bit */
        /* print bit value */
        /* shift mask to the right by 1 bit */
    }
}
