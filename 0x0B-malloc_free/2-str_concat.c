#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -concatenates teo string
 * @s1: the sring to be concatenated
 * @s2: string to be concatenated
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int num, concatn1 = 0, size = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (num = 0; s1[num] || s2[num]; num++)
	size++;
concat = malloc(sizeof(char) * size);
if (concat == NULL)
	return (NULL);
for (num = 0; s1[num]; num++)
	concat[concatn1++] = s1[num];
for (num = 0; s2[num]; num++)
	concat[concatn1++] = s2[num];
return (concat);
}
