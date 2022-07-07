#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints fizz-buzz test
 *
 * Return: returns value
 */
void fizz_buzz(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 != 0)
	printf("Fizz ");
else if (num % 5 == 0 && num % 3 != 0)
	printf("Buzz ");
else if (num == 100)
	printf("Buzz");
else if (num % 3 == 0 && num % 5 == 0)
	printf("FizzBuzz ");
else
	printf("%d ", num);
}
	printf("\n");
return (0);
}

