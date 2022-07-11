#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: pointer variable
 */
void rev_string(char *s)
{
int n, index1 = 0, index2 = 0;
char tmp;
	while (s[index1] != '\0')
		index1++;
	index2 = index1 - 1;
	for (n = 0; n < index1 / 2; n++)
	{
		tmp = s[n];
		s[n] = s[index2];
		s[index2] = tmp;
		index2 -= 1;
	}

}
