#include "main.h"

/**
 * _strcpy - copies value from source to destination
 * @dest: this is the destination parameter for the value
 * @src: this is the string to be copied
 * Return: returns the dest value
 */
char *_strcpy(char *dest, char *src)
{
char *var = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
return (var);
}
