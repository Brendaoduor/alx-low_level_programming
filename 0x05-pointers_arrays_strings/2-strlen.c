#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string
 * @s:pointer memory location
 * Return: returns string length
 */
int _strlen(char *s)
{
int len;
while (*s != '\0')
{
	len += 1;
	*s = *s + 1;
}
len = strlen(s);
putchar(len);
return (len);
}
