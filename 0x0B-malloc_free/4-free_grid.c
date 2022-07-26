#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocated to a program
 * @grid: its the 2D array to be freed
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
int number;
for (number = 0; number < height; number++)
	free(grid[number]);
free(grid);
}
