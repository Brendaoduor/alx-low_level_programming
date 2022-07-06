#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
unsigned long int a = 1, b = 2, next = 0, sum = 0;
int x = 0;
for (x = 0; x <= 33; x++)
{
if (a < 4000000 && (a % 2) == 0)
{
sum += a;
}
next = a + b;
a = b;
b = next;
}
printf("%lu\n", sum);
return (0);
}

