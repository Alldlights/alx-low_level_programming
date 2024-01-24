#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Function that initializes variable of type struct dog
 * @d: struct dog pointer
 * @name: name of dog
 * @age: age of the dog
 * @owner: The owener of the dog
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
