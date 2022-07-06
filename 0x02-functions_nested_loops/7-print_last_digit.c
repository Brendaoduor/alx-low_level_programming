#include "main.h"

/**
 * print_last_digit - prints the value fo last digit
 *
 * @z: passes parameter
 *
 * Return:  returns the value of z
 */
int print_last_digit(int n)
{
if (n < 0)

n = -n;

return (n % 10);
}

