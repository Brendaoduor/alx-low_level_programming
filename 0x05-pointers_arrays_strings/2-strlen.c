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
char *s = "holberton school";
len = strlen(s);
putchar(len);
return (0);
}
