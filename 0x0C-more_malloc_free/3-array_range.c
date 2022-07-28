#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the least and first value of the array
 * @max: the last value of the array
 * Return: always 0
 */
int *array_range(int min, int max)
{
int *arr, num, size;
if (min > max)
	return (NULL);
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
	return (NULL);
for (num = 0; num < size; num++)
	arr[num] = min++;
return (arr);
}
