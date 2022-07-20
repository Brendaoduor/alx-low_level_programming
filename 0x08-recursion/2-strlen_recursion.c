#include "main.h"

/**
 * _strlen_recursion - prints the length of the string
 * @s: the string we are finding its length
 * Return: its the exiting condition
 */
int _strlen_recursion(char *s)
{
int str = 0;
	if (*s)
	{
		str++;
		str = str + _strlen_recursion(s + 1);
	}
	return (str);
}
