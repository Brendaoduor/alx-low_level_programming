#include "main.h"

/**
 * print_last_digit - prints the value fo last digit
 *
 * @n: passes parameter
 *
 * Return:  returns the value of z
 */
int print_last_digit(int n)
{
int n = n % 10;
if (n < 0)

n *= -1;
_putchar(n + '0');

return (n);
}

