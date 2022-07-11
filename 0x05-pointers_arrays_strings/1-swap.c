include "main.h"

/**
 *swap_int - swaps the value of two integers
 * @a:pointer memory
 * @b:memory locations that point to the actual variable
 */
void swap_int(int *a, int *b)
{
int res;
res = *a;
*a = *b;
*b = res;
}
