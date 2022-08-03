#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: the first number
 * @b: the second number
 * Return: returns the sum of both b and a
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtracts the two numbers
 * @a: first number
 * @b: second number
 * Return: returns the difference of both a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies the two numbers
 * @a: first number
 * @b: second number
 * Return: returns the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividies two numbers
 * @a: the first number
 * @b: the second number
 * Return: returns their division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the modulus of the two numbers
 * @a: the first number
 * @b: the second number
 * Return: returns the modulus of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
