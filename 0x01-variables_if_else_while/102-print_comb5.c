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
	putchar((num / 10) + '0');
	putchar((num % 10) + '0');
	putchar(' ');
	putchar((num1 / 10) + '0');
	putchar((num1 % 10) + '0');
	if(num == 98 && num1 ==99)
		continue;
	putchar(',');
	putchar(' ');
}
}
	putchar('\n')
return (0);
}

