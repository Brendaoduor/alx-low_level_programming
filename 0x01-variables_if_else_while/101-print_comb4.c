#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
int num;
int num1;
int num3;
for (num = 0; num < 9; num++)
{
for (num1 = 1; num < 9; num++)
{
for (num3 = 2; num1 < 9; num1++)
{
	if (num1 > num && num3 > num1)
	putchar(num);
	putchar(num1);
	putchar(num3);
	if (num != 7 || num1 != 8 || num3 != 9)
	putchar(',');
	putchar(' ');
}
}
}
putchar('\n');
return (0);
}
