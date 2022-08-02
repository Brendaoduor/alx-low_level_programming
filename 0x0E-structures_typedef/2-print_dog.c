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
if (d->name == NULL)
	printf("name: (nil)\n");
else
	printf("name: %s\n", d->name);
printf("age: %f\n", d->age);
if (d->owner == NULL)
	printf("owner: (nil)\n");
else
	printf("owner: %s\n", d->owner);
}
}
