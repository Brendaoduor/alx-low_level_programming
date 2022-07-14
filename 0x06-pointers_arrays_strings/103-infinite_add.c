#include "main.h"

/**
 * add_strings - adds numbers stored in the add_strings
 * @n2: second number in the string to be added
 * @n1: first number in the string to be added
 * @r: buffer for storing the result
 * @a_int: the current number index
 * Return: prints the result
 */
char *add_strings(char *n1, char *n2, char *r, int a_int);

char *add_strings(char *n1, char *n2, char *r, int a_int)
{
int num, var = 0;
	for (; *n1 && *n2; n1--, n2--, a_int--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += var;
		*(r + a_int) = (num % 10) + '0';
		var = num / 10;
	}
	for (; *n1; n1--, a_int--)
	{
		num = (*n1 - '0') + var;
		*(r + a_int) = (num % 10) + '0';
		var = num / 10;
	}
	for (; *n2; n2--, a_int--)
	{
		num = (*n2 - '0') + var;
		*(r + a_int) = (num % 10) + '0';
		var = num / 10;
	}
	if (var && a_int >= 0)
	{
		*(r + a_int) = (var % 10) + '0';
		return (r + a_int);
	}
	else if (var && a_int < 0)
		return (0);
	return (r + a_int + 1);
}
/**
 * infinite_add - Adds the two numbers.
 * @n1: number to be added.
 * @n2: The number to be added.
 * @r: buffer to store the result.
 * @size_r: buffer size.
 * Return: returns output
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int num, b1 = 0, b2 = 0;
	for (num = 0; *(n1 + num); num++)
		b1++;
	for (num = 0; *(n2 + num); num++)
		b2++;
	if (size_r <= b1 + 1 || size_r <= b2 + 1)
		return (0);
	n1 += b1 - 1;
	n2 += b2 - 1;
	*(r + size_r) = '\0';
	return (add_strings(n1, n2, r, --size_r));
}
