#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the value to be returned
 * @index: the index of the bit we want to set
 * Return: returns 1 if success and -1 if  an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
