#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc:counts the arguments passed in the command line
 * @argv: its an array that holds the string
 * Return: always 0 success
 */
int main(int argc, char __attribute__((unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
