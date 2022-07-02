#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
	printf("%d last digit of n is n and is greater than 5\n", n);
}
if (n == 0)
{
	printf("%d last digit of n is n and is zero\n", n);
}
if (n < 6)
{
	printf("%d last digit of n is n and is less than 6\n", n);
}
return(0);
}
