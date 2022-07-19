#include "main.h"

/**
 * print_chessboard - print the chess board
 * @a: the chessboard to be printed
 */
void print_chessboard(char *a[8])
{
int a, b;
for (a = 0; a[7]; a++)
{
	for (b = 0; b < 8; b++)
	{
		_putchar(a[a][b]);
	}
	_putchar('\n');
}
