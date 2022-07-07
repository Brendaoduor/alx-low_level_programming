#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: its a memory location for parameters passed
 */
void print_diagonal(int n)
{
int diagonal;
int x;
if (n <= 0)
	_putchar('\n');
else
{
for (diagonal = 0; diagonal < n; diagonal++)
{
for (x = 0; x < diagonal; x++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
