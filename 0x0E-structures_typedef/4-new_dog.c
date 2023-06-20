#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: dog's owner
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_own, i;
	dog_t *new_d;

	new_d = (dog_t*)malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	len_name = len_own = 0;
	while (name[len_name++])
		;
	while (owner[len_own++])
		;
	new_d->name = malloc(len_name * sizeof(new_d->name));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
		new_d->name[i] = name[i];
	new_d->age = age;
	new_d->owner = malloc(len_own * sizeof(new_d->owner));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	for (i = 0; i <= len_own; i++)
		new_d->owner[i] = owner[i];
	return (new_d);
}
