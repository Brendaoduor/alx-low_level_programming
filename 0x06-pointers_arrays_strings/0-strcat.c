#include "mainh.h"
#include <string.h>

/**
 * strcat - this function enables concatenation between two strings
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

