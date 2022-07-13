#include "mainh.h"
#include <string.h>

/**
 * _strcat - this function enables concatenation between two strings
 * @dest: points to the destination of concatinated string
 * @src: points to the string which is to be concatinated
 * Return: returns the result after concatenation
 */
char *_strcat(char *dest, char *src)
{
char var = 0;
char var1 = 0;

	while (dest[var])
		var++;
	for (var = 0; src[var]; var++;)
	{
		dest[var1] = src[var];
	}
return (dest);
}

