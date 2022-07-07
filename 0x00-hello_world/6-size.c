#include <stdio.h>

/**
 * main-Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
int a;
char b;
long int 1;
long long int 11;
float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(1));	
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(11));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
