#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: its a memory location for parameters passed
 */
void print_diagonal(int n)
{
int diagonal;
if (n > 0)
{
for (diagonal = 0; diagonal < n; diagonal++)
_putchar('\\');
}
if (diagonal == n - 1)
continue;
{
_putchar('\n');
}
_putchar('\n');
}
