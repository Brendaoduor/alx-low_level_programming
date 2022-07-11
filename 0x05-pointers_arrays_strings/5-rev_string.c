#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: pointer variable
 */
void rev_string(char *s)
{
int n, index;
char res;
	while (s[index] != '\0')
		n++;
	for (index = n - 1; index >= n / 2; index--)
	{
		res = s[index];
		s[index] = s[n - index - 1];
	}	s[n - index - 1] = res;
}
