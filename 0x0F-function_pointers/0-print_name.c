#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints the name
 * @name: the name to be printed
 * @f: pointer to a function that prints the name
 *
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
