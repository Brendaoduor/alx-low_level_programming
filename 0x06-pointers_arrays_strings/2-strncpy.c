#include "main.h"
#include <string.h>

/**
 * _strncpy - function copies a string
 * @dest: the destination of copied string
 * @src: the string to be copied
 * @n: maximum number of bytes to be copied from src
 * Return: returns the finsl output of copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
int num = 0, index = 0;
	while (src[num])
		num++;
	for (num = 0; src[num] && num < n; num++)
		dest[num] = src[num];
	for (num = index; num < n; num++)
		dest[num] = '\0';
return (dest);
}
