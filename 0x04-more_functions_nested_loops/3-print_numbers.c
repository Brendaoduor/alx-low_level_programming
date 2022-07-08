#include "main.h"

/**
 * print_numbers - function prints numbers from 0 to 9
 */
void print_numbers(void)
{
int a;
while (a < 10)
{
	_putchar(a + '0');
	a += 1;
}
	_putchar('\n');
}

