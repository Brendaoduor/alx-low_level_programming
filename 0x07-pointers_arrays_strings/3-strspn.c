#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be operated on
 * @accept: the acquired prefix
 * Return: returns the result
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int size = 0;
int a;
while (*s)
{
	for (a = 0; accept[a]; a++)
	{
		if (*s == accept[a])
		{
			size++;
			break;
		}
		else if (accept[a + 1] == '\0')
			return (size);
	}
	s++;
}
return (size);
}
