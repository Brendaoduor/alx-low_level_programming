#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: the second string to be concatented
 * @n:size of the strings
 * Return: always 0;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size = n, string;
char *str;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (string = 0; s1[string]; string++)
	size++;
str = malloc(sizeof(char) * (size + 1));
if (str == NULL)
	return (NULL);
size = 0;
for (string = 0; s1[string]; string++)
	str[size++] = s1[string];
for (string = 0; s2[string] && string < n; string++)
	str[size++] = s2[string];
str[size] = '\0';
return (str);
}
