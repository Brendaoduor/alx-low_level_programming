#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	int i, len = 0;
	unsigned long int val;

	for (i = 63; i >= 0; i--)
	{
		val = n >> i;
		if (val & 1)
		{
			_putchar ('1');
			len++;
		}
		else if (len)
			_putchar ('0');
	}
	if (!len)
		_putchar ('0');
}
