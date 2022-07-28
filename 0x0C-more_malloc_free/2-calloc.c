#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes of each element
 * Return: always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *numb;
char *mem;
unsigned int n1;
if (nmemb == 0 || size == 0)
	return (NULL);
numb = malloc(size * nmemb);
if (numb == NULL)
	return (NULL);
mem = numb;
for (n1 = 0; n1 < (size * nmemb); n1++)
	mem[n1] = '\0';
return (numb);
}
