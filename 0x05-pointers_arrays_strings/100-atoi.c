#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: pointer
 *
 * Return: returns the result
 */
int _atoi(char *s)
{
int num = 1;
unsigned int num2 = 0;
do {
	if (*s == '-')
		num *= -1;
	else if (*s >= '0' && *s <= '9')
		num2 = (num2 * 10) + (*s - '0');
	else if (num2 > 0)
		break;
}
while (*s++)
	return (num2 * num);
}
