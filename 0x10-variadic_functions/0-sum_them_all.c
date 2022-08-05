#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the integers to be added
 * Return: always 0
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	vi_list args;
	unsigned int a, sum;

	va_start(args, n);
	sum = 0;

	for (a = 0; a < n; a++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
