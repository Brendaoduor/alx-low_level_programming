#include "main.h"

/**
 * print_array - displays n number of integers
 * @a: pointer
 * @n: integers to be displayed in the array
 */
void print_array(int *a, int n)
{
int arr;
	for (arr = 0; arr < n; arr++)
		printf("%d", a[arr]);
	if (arr == n - 1)
		continue;
	printf(", ");
	printf("\n");
}
