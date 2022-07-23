#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: counts the arguments passed to the command line
 * @argv: an array that holds the string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int n1, n2, prod;
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	prod = n1 * n2;
	printf("%d\n", prod);
	return (0);
}
