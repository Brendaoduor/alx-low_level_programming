#include "main.h"

/**
 * _strcpy - copies value from source to destination
 * @dest: this is the destination parameter for the value
 * @src: this is the string to be copied
 * Return: returns the dest value
 */
char *_strcpy(char *dest, char *src)
{
int var = 0;

	while (src[var] != '\0')
	{
	dest[var] = src[var];
	dest++;
	src++;
	}
	*dest = '\0';
return (dest);
}
