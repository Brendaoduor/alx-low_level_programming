#include "main.h"
#include <stdlib.h>

/**
 * _strdup -returns a pointer to a newly allocated space in memory
 * @str: the string to be allocated
 * Return: always 0
 */
char *_strdup(char *str)
{
char *mystr;
int num, size = 0;
if (str == NULL)
	return (NULL);
for (num = 0; str[num]; num++)
	size++;
mystr = malloc(sizeof(char) * (size + 1));
if (mystr == NULL)
	return (NULL);
for (num = 0; str[num]; num++)
	mystr[num] = str[num];
mystr[size] = '\0';
return (mystr);
}
