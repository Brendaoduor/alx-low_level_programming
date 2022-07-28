#include "main.h"
#include <strings.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the integer to be allocated memory
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
int *n;
int size = 0;
n = malloc(sizeof(int) * size);
n[0] = 98;
_putchar(n);
return (0);
}
