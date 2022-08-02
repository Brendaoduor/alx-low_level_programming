#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dog
 * @d: the dog to be freed
 * Return: always 0
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
