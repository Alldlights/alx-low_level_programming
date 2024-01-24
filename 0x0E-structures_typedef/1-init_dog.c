#include "dog.h"

/**
 * init_dog - Function that initializes a variable of struct dog
 * @d: Pointer to that struct name
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Nothing
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
