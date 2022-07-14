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
		if (str[a] >= 97 && str[a] <= 122)
			a++;
			str[a] -= 32;
	}
	return (str);
}
