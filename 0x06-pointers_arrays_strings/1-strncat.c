#include "main.h"
#include <string.h>

/**
 * _strncat - also does string concantenation between two strings
 * @dest: its the pointer to the appended result
 * @src: source string to be appended to the dest
 * @n: its the variable
 * Return: returns the final output of the program
 */
char *_strncat(char *dest, char *src, int n)
{
int index1 = 0, index2 = 0;
	while (dest[index1])
		index1++;
	for (index1 = 0; src[index1] && index < n; index1++)
	{
		dest[index2] = src[index1];
	}
return (dest);
}
