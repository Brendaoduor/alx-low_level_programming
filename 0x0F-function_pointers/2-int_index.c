#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for which the cmp
 * function does not return 0
 * @array:the array
 * @size: size of array
 * @cmp: pointer to the array
 * Return: returns the result if success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) != 0)
			return (n);
	}
	return (-1);
}
