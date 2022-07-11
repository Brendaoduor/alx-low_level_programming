#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: pointer variable
 */
void rev_string(char *s)
{
int n, index1, index2;
char tmp;
	while (s[index1] != '\0')
		index1++;
	index2 = index1 - 1;
	for (n = 0; n < index1; n++)
	{
		tmp = s[n];
		s[n] = s[index2];
		s[index2] = tmp;
		index2 -= 1;
	}

}
