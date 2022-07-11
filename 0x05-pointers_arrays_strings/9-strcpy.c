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
while (src[var])
{
	dest[var] = src[var];
	var++;
}
return (dest);
}
