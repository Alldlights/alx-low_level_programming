#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees a struct
 * @d: the pointer to struct type
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
