#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int a;
unsigned long int b = 1, c = 2, sum;
for (a = 0; a <= 98; a++)
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
