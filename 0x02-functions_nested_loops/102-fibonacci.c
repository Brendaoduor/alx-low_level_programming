#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0(success)
 */
int main(void)
{
int n;
unsigned long a = 0, b = 1, sum;
for (n = 0; n <= 50; n++)
{
sum = a + b;
printf("%lu, ", sum);
a = b;
b = sum;
}
if (n == 49)
printf("\n");
return (0);
}
