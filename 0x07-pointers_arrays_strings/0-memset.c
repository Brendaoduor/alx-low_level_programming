#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory space to be filled
 * @b: byte to fill
 * @n: numbers of spaces to be filled
 * Return: pointer to memory area space
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
