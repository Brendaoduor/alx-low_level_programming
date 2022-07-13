#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function copies a string
 * @dest: the destination of copied string
 * @src: the string to be copied
 * @n: maximum number of bytes to be copied from src
 * Return: returns the finsl output of copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
char *index = *dest;
	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	return (index);
}
