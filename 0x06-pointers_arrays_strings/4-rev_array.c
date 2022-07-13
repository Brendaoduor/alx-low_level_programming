#include "main.h"

/**
 * reverse_array - reverses the content of an array integers
 * @a: an array of integers
 * @n: the number of integers to swap
 */
void reverse_array(int *a, int n)
{
int tmp, num;
	for (num < n - 1; num >= n / 2; num--)
	{
	tmp = a[n - 1 - num];
	a[n - 1 - num] = a[num];
	a[num] = tmp;
	}
}
