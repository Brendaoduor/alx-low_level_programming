#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b:buffer that we are printing
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
int byte, num;
	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
		for (num = 0; num < 10; num++)
		{
			if ((num + byte) >= size)
				printf("  ");
			else
				printf("%02x", *(b + num + byte));
			if ((num % 2) != 0 && num != 0)
				printf(" ");
		}
		for (num = 0; num < 10; num++)
		{
			if ((num + byte) >= size)
				break;
			else if (*(b + num + byte) >= 31 &&
				 *(b + num + byte) <= 126)
				printf("%c", *(b + num + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
