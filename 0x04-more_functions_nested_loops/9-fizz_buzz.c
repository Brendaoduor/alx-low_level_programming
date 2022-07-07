#include <stdio.h>

/**
 * fizz_buzz - prints fizz-buzz test
 *
 * Return: returns value
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 != 0)
	printf("Fizz ");
else if (num % 5 == 0 && num % 3 != 0)
	printf("Buzz ");
else if (num % 3 == 0 && num % 5 == 0)
	printf("FizzBuzz ");
else
	printf("%d ", num);
}
	printf("\n");
return (0);
}

