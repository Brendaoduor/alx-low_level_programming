#include "main.h"
#include <string.h>

/**
 * _strchr - function locates a character in a string
 * @s: the string to be used to locate the given character
 * @c: the character to be located
 * Return: returns the result
 */
char *_strchr(char *s, char c)
{
char a;
	for (a = 0; s[a] >= '\0'; a++)
	{
	if (s[a] == c)
	return (s + a);
	}
return ('\0');
}
