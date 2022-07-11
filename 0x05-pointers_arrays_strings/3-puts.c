#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer variable.
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
	putchar(*str);
putchar('\n');
}
