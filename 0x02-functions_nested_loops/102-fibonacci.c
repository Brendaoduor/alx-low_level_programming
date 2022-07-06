#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0(success)
 */
int main(void)
{
int n;
int a = 1, b = 2, sum;
for (n = 0; n <= 50; n++)
{
printf("%lu", sum);
a = b;
b = sum;
sum = a + b;
if (n == 1)
printf("\n");
else
printf(", ");
}
return (0);
}
