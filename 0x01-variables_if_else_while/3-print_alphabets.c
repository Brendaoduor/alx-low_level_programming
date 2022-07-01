#include <stdio.h>

/**
 * main -prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0(success)
 */
int main(void)
{
char x;
for (int x = 'a'; x <= 'z'; x++)
{
	putchar(x);
}
for (int x = 'A'; X <= 'Z'; x++)
{
	putchar(x);
}
	putchar('\n');
return (0);
}
