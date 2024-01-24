#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * new_dog - Function that creates a new dog
 * @name: Name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: Pointer to the new type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = strdup(name);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	ptr->owner = strdup(owner);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
