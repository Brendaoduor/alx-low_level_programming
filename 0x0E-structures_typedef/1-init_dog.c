#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of dogs owner
 * @d: the dog to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
