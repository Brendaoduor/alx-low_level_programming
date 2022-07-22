#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: counts the arguments passed to the terminal
 * @argv: its an array that holds the string
 * Return: always 0 success
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
