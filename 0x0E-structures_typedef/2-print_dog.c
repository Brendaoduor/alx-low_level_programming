#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: the dog to be printed
 * Return: always 0
 */
void print_dog(struct dog *d)
{
if (d == 0)
	{
	return;
	}
else
{
if (d->name && d->owner == NULL)
	printf("name: (nil)\n");
	printf("owner: (nil)\n");
else
	printf("name: %s\n age: %f\n owner: %s\n", d->name, d->age, d->owner);
}
}
