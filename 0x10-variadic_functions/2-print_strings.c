#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator:is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strg;
	char *str;
	unsigned int num;

	va_start(strg, n);
	for (num = 0; num < n; num++)
		{
			str = va_arg(strg, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
		}
	printf("\n");	
	va_end(strg);
}
