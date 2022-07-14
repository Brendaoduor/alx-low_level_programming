#include "main.h"

/**
 * string_toupper - prints all stings characters to uppercase
 * @str: the characters to be  changed to uppercase
 * Return: returns the output
 */
char *string_toupper(char *str)
{
int a = 0;
	while (str[a])
	{
	if (str[a] >= 'a' && str[a] <= 'z')
		str[a] -= 32;
		a++;
	}
	return (str);
}
