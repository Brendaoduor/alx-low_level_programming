#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: it is a character for memory location
 *
 * Return: returns 0, 1 and -1 depending on the condition given.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
else if (n == 0)
{
_putchar('0');
}
else if (n < 0)
{
_putchar('-');
}
return (1 || 0 || -1);
}
