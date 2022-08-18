#include "main.h"
#include <stdlib.h>

/**
 * clear_bit- sets the value of a bit to 0 at a given index.
 * @n: the value of the number we want to clear
 * @index: the index ot the bit we want to set
 * Return: returns 1 if succusses and -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= (~(1 << index));
	return (1);
}
