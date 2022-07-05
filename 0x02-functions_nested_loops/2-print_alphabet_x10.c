#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 */
void print_alphabet_x10(void)
{
char a;
int m;
for (m = 0; m <= 10; m++)
{
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}
}
