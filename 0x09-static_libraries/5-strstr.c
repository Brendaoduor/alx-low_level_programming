#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the strint to be searched
 * @needle: the searched result
 * Return: returns the result output
 */
char *_strstr(char *haystack, char *needle)
{
int n;
if (*needle == 0)
	return (haystack);
while (*haystack)
{
n = 0;
	if (*haystack == needle[n])
	{
	do {
		if (needle[n + 1] == '\0')
			return (haystack);
		n++;
	} while (haystack[n] == needle[n]);
	}
		haystack++;
}
return ('\0');
}
