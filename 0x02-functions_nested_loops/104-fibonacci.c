#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int a;
unsigned long int b = 1, c = 2, sum = 0;
for (a = 0; a <= 98; a++)
if (a != 98)
{
printf("%lu, ", sum);
}
else
{
printf("%lu\n", sum);
}
sum = b + c;
b = c;
c = sum;
return (0);
}
