#include "main.h"
#include <stdlib.h>

/**
 * _realloc -realocates a memory block using malloc and free
 * @ptr:is a pointer to the memory previously allocated with a call to malloc
 * @old_size:is the size, in bytes, of the allocated space for ptr
 * @new_size:is the new size, in bytes of the new memory block
 * Return: always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *mem;
char *ptr_new, *word;
unsigned int num;
if (new_size == old_size)
	return (ptr);
if (ptr == NULL)
{
	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);
	return (mem);
}
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
ptr_new = ptr;
mem = malloc(sizeof(*ptr_new) * new_size);
if (mem == NULL)
{
	free(ptr);
	return (NULL);
}
word = mem;
for (num = 0; num < old_size && num < new_size; num++)
	word[num] = *ptr_new++;
free(ptr);
return (mem);
}
