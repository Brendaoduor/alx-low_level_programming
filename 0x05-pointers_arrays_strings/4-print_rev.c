#include "main.h"

/**
 * print_rev - prints string in reverse followed by a newline
 * @s:pointer variable
 */
void print_rev(char *s)
{
int x;
char *a, *e, res;
	a = s;
	e = s;
	for (x = 0; x < x - 1; x++)
		*e++;
	for (x = 0; x < 1 / 2; x++)
	{
		res = *e;
		*e = *a;
		*a = res;

		a++;
		e++;
	}
}
