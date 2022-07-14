#include "main.h"
#include <string.h>

/**
 * string_toupper - prints all stings characters to uppercase
 * @str: the characters to be  changed to uppercase
 * Return: returns the output
 */
char *string_toupper(char *str)
{
int x = 0;
while (str[x])
	{
	if (str[x] >= 'a' && str[x] <= 'z')
	str[x] = str[x] - 32;
		x++;
	}
return (str);
}
