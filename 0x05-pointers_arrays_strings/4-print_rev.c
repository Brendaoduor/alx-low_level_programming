#include "main.h"

/**
 * print_rev - prints string in reverse followed by a newline
 * @s:pointer variable
 */
void print_rev(char *s)
{
int x, res;
	while (s[res++])
		x++;
	for (res = x - 1; res >= 0; x--)
		putchar(s[res]);
	putchar('\n');
}
