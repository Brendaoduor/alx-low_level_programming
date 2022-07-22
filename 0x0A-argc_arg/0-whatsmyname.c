#include <stdio.h>

/**
 * main - function that prints its name followed with new line
 * @argc: represents argument count
 * @argv: holds the string values
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int name;
	for (name = 0; name < argc; name++)
	{
		printf("%s", argv[name]);
		printf("\n");
	}
return (0);
}
