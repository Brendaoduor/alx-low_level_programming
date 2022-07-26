#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width size of the array
 * @height: the height size of the array
 * Return: always 0
 */
int **alloc_grid(int width, int height)
{
int **twoD;
int height_index, widt;
if (width <= 0 || height <= 0)
return (NULL);
twoD = malloc(sizeof(int *)  * height_index);
if (twoD == NULL)
	return (NULL);
for (height_index = 0; height_index < height; height_index++)
{
	twoD[height_index] = malloc(sizeof(int)  * widt);
	if (twoD[height_index] == NULL)
	{
		for (; height_index >= 0; height_index--)
			free(twoD[height_index]);
	free(twoD);
	return (NULL);
	}
}
for (height_index = 0; height_index < height; height_index++)
{
	for (widt = 0; widt < width; widt++)
		twoD[height_index][widt] = 0;
}
	return (twoD);
}
