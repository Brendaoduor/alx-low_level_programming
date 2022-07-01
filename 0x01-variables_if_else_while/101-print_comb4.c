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
for (num = 0; num < 8; num++)
{
for (num1 = num + 1; num < 9; num++)
{
for (num3 = num1 + 1; num1 < 10; num1++)

	putchar(num);
	putchar(num1);
	putchar(num3);
	putchar(',');
	putchar(' ');
}
}
	putchar('\n')
return (0);
}
