#include "dog."
#include <stdio.h>

/**
 * init_dog - Function that initializes a variable type struct dog
 * @d: The struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
