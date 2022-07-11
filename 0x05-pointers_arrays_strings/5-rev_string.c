#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: pointer variable
 */
void rev_string(char *s)
{
int n, index = 0;
char tmp;
	while (s[index++])
		n++;
	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = s[index];
		s[index] = s[n - index - 1];
	}	s[n - index - 1] = tmp;
}
