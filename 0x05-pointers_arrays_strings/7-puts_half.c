#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of the string
 * @str: the string to be printed
 *
 */
void puts_half(char *str)
{
int a, b, c;
	a = strlen(str);
	if (a % 2 == 1)
		b = a / 2 + 1;
	else
		b = a / 2;
	for (c = b; c < a; c++)
		putchar(str[c]);
	putchar('\n');
}
