#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees a struct dog
 * @d: The pointer to the struct dog
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
