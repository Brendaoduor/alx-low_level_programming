#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0(success)
 */
int main(void)
{
int a = 1, b = 2, n = 50, sum = 0;
printf("Fibonacci series: %d, %d", a, b);
sum = a + b;
while (sum <= n)
{
printf("%d", sum);
a = b;
b = sum;
sum = a + b;
}
return (0);
}
