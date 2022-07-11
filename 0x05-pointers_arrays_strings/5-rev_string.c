#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: pointer variable
 */
void rev_string(char *s)
{
int n = 0, index = 0;
char res;
	while (s[index++])
		n++;
	for (index = n - 1; index >= n / 2; index--)
	{
		res = s[index];
		s[index] = s[n];
	}	s[n] = res;
}
