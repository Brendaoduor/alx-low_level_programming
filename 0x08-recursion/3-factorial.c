#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the size of integers
 * Return: returns the value depending on the given condition
 */
int factorial(int n)
{
int a;
	if (a < 0)
		return (-1);
	if (n == 0)
		return (1);

		a *= factorial(n - 1);
		return (a);
}
