#include "main.h"
#include <stdlib.h>

/**
 * create_array -creates an array of chars, and initializes it
 * with a specific char
 * @size: size of the array
 * @c: the char to be iniialized
 * Return: always 0 for success
 */
char *create_array(unsigned int size, char c)
{
char *pointer;
unsigned int num;
if (size == 0)
	return (NULL);
pointer = malloc(sizeof(char) * size);
if (size == NULL)
	return (NULL);
for (num = 0; num < size; num++)
	pointer[num] = c;
return (num);
}
