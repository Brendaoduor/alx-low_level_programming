#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: the string to be reversed
 */
void _print_rev_recursion(char *s)
{
	if (*S)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
