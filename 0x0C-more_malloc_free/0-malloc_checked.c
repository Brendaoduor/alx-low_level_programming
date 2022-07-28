#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the integer to be allocated memory
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
int *n = malloc(b);
if (n == NULL)
	exit(98);
return (n);
}
