#include <stdio.h>

/**
 * main - prints the arguments it has received
 * @argc: counts the arguments passed to the command line
 * @argv: its an srray that holds the string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
printf("%s\n", argv[a]);
return (0);
}
