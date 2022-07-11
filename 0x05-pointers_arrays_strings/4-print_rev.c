#include "main.h"

/**
 * print_rev - prints string in reverse followed by a newline
 * @s:pointer variable
 */
void print_rev(char *s)
{
int x, res;
res = 0;
	while (s[res] != '\0')
		res++;
	for (x = res - 1; x >= 0; x--)
		putchar(s[x]);
	putchar('\n');
}
