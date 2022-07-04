#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
int a, b, c, d, e, f;
for (e = 0; e < 100; e++)
{
a = e / 10;
b = e % 10;
for (f = 0; f < 100; f++)
{
c = f / 10;
d = f % 10;
if (a < c || (a == c && b < d))
{
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(c + '0');
putchar(d + '0');
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

