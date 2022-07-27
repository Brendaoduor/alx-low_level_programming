#include "main.h"

/**
 * _memcpy()- function copies bytes from memory area
 * @dest: the destination for the copied byte
 * @src: the byte to be copied
 * @n: number of spaces to fill
 * Return: returns the dest where the copied byte is
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 0;
while (a < n)
{
*(dest + a) = *(src + a);
a++;
}
return (dest);
}
