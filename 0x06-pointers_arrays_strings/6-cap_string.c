#include "main.h"

/**
 * cap_string -capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: prints the result
 */
char *cap_string(char *str)
{
int a = 0;
	while (str[a])
	{
	while (!(str[a] >= 'a' && str[a] <= 'z'))
		a++;
	if (str[a - 1] == ' ' ||
		str[a - 1] == '\t' ||
		str[a - 1] == '\n' ||
		str[a - 1] == ',' ||
		str[a - 1] == ';' ||
		str[a - 1] == '.' ||
		str[a - 1] == '!' ||
		str[a - 1] == '?' ||
		str[a - 1] == '"' ||
		str[a - 1] == '(' ||
		str[a - 1] == ')' ||
		str[a - 1] == '{' ||
		str[a - 1] == '}' ||
		index == 0)
		str[a] -= 32;
	index++;
	}
	return (str);
}
