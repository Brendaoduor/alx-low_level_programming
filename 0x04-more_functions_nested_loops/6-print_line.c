#include "main.h"

/**
 * print_line - prints a line in the terminal
 * @n: passes parameters
 */

void print_line(int n)
{
int len;
if (n > 0)
{
for (len = 0; len < n; len++)
_putchar('_');
}
_putchar('\n');
}
