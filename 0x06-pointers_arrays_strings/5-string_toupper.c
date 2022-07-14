#include "main.h"

/**
 * string_toupper - prints all stings characters to uppercase
 * @str: the characters to be  changed to uppercase
 * Return: returns the output
 */
char *string_toupper(char *str)
{
char a;
	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			a++;
		str[a] -= 32;
	}
	return (str);
}
