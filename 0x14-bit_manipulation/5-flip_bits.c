#include "main.h"

/**
 * flip_bits -flip to get from one number to another
 * @n: the value of the number we are flipping
 * @m: the second value of the number we will flip with
 * Return: always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a, b = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (a = 0; a < j; a++)
	{
		if ((m & 1) != (n & 1))
			b += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (b);
}
