#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n:the number or value  we are returning
 * @index: index of the bit we want to get
 * Return: always 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = (n >> index);

	if (index > 32)
		return (-1);
	return (mask & 1);
}
