#include "main.h"

/**
 * print_chessboard - print the chess board
 * @a: the chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
int x;
int b;

for (x = 0; a[x][7]; x++)
	{
	for (b = 0; b < 8; b++)
		_putchar(a[x][b]);
	_putchar('\n');
	}
}
