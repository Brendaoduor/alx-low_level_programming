#include "main.h"
int root(int n1, int n2);
/**
 * root - finds the natural square root of a given number
 * @n1: the number we are finding the root for
 * @n2: the tested root
 * Return: displays the output considering a given condition
 */
int root(int n1, int n2)
{
	if ((n2 * n2) == n1)
		return (n2);
	else if ((n2 * n2) > n1)
		return (-1);
	return (root(n1, n2 + 1));
}

/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: the number we are finding its root
 * Return: returns the output required
 */
int _sqrt_recursion(int n)
{
int n2 = 0;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (root(n, n2));
}
