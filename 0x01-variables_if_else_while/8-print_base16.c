#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
int letter;
int a;
	for (a = 0; a < 10; a++)
	putchar(a);
	for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);
putchar('\n');
return (0);
}
