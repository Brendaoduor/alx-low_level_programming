#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the size of integers
 * Return: returns the value depending on the given condition
 */
int factorial(int n)
{
int str = n;
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	str *= factorial(n - 1);
	return (str);
}
