#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
int a, b;
srand(time(NULL));
b = 0;
while (b <= 2645)
{
	a = (rand() % 128);
	b += a;
	printf("%c", a);
}
printf("%c", 2772 - sum);
return (0);
}
