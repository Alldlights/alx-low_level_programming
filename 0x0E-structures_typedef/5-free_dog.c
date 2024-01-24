#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a struct dog
 * @d: Pointer to struct dog
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
