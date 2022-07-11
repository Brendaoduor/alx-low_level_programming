#include "main.h"

/**
 * print_array - displays n number of integers
 * @a: pointer
 * @n: integers to be displayed in the array
 */
void print_array(int *a, int n)
{
int arr;
int *ptr = &arr;
	for (a = 0; a < arr; a++)
		printf("%d, ", *(ptr + a));
	printf("\n");
}
