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
for (num = 0; num < 98; num++)
{
for (num1 = num + 1; num < 99; num1++)
{
	putchar(num);
	putchar(num1);
	putchar(',');
	putchar(' ');
}
}
	putchar('\n')
return (0);
}

