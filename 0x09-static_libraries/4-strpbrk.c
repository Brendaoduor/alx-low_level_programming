#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: the searched result
 * Return: returns the result
 */
char *_strpbrk(char *s, char *accept)
{
int a;
	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
