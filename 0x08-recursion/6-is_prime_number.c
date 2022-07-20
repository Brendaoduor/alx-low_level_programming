#include "main.h"
int is_prime(int num, int val);
/**
 * is_prime - checks if a number is a prime number
 * @num: is the we are to check
 * @val: its the divisor
 * Return: returns the result
 */
int is_prime(int num, int val)
{
if (num % val == 0)
	return (0);
if (val == num / 2)
	return (1);
return (is_prime(num, val + 1));
}

/**
 * is_prime_number - returns 1 if the integer is a prime number
 * @n: the number to be tested
 * Return: returns the result
 */
int is_prime_number(int n)
{
int val = 2;
if (n <= 1)
	return (0);
if (n >= 2 && n <= 3)
	return (1);
return (is_prime(n, val));
}
