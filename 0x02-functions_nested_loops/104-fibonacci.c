#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int a;
unsigned long int b = 0, c = 1, sum;
for (a = 1; a <= 98; a++)
{
sum = b + c;
if (a != 98)
{
printf("%lu, ", sum);
}
else
{
printf("%lu\n", sum);
}
b = c;
c = sum;
}
return (0);
}
