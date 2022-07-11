#include "main.h"
#include <string.h>

/**
 * puts2 - function prints evwry character of a string
 * @str: the string to be printed
 */
void puts2(char *str)
{
int a, string;
string = strlen(str);
for (a = 0; a < string; a++)
	putchar(str[a]);
putchar('\n');
}
