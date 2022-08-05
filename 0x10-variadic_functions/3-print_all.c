#include "variadic_functions.h"
#include <stdarg.h>

void print_char(va_list arg);
void print_float(va_list arg);
void print_int(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
/**
 * print_char - function that prints a character
 * @arg: the parameters passed
 */
void print_char(va_list arg)
{
	char str;

	str = va_arg(arg, int);
	printf("%c", str);
}

/**
 * print_float - prints a float
 * @arg: the parameters passed pointing to float to be printed
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_int - prints an integer
 * @arg: the parameters passed
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_string - prints a string
 * @arg: the parameters passed
 * Return: always 0 success
 */
void print_string(va_list arg)
{
	char *strg;

	strg = va_arg(arg, char *);
	if (strg == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", strg);
}

/**
 * print_all - prints anything
 * @format:is a list of types of arguments passed to the function
 * @...: its a variable number of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int n, numb;
	char *space = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(args, format);
	while (format && (*(format + n)))
	{
		numb = 0;
		while (numb < 4 && (*(format + n) != *(funcs[numb].symbol)))
			numb++;
		if (numb < 4)
		{
			printf("%s", space);
			funcs[numb].print(args);
			space = ", ";
		}
		n++;
		printf("\n");
		va_end(args);
	}
}
