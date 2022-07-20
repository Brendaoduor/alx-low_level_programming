#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the integer to be raised
 * @y: the power of the interger value
 * Return: returns the value depending on condition specified
 */
int _pow_recursion(int x, int y)
{
int value = x;

if (x < 0)
	return (-1);
else if (x == 0)
	return (1);
value *= _pow_recursion(x, y - 1);

return (value);
}
