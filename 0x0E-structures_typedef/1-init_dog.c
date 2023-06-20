#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: struct definition
 * @name: pointer to the name passed to the function
 * @age: age passed to the function
 * @owner: argument passed to the function
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
