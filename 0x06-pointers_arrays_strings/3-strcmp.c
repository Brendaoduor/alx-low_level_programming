#include "main.h"
#include <string.h>

/**
 * _strcmp - this function compares two strings
 * @s1: points to the first string to be compared
 * @s2: points to the second string to be compared
 * Return: returns the result of the output
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
	*s1++;
	*s2++;
}
	if (*s1 == *s2)
	{
	return (0);
	}
	else
	return (*s1 - *s2);
}
