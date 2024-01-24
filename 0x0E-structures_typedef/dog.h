#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure of type dog
 * @name: Name of the dog
 * @owner: The owner of the dog
 * @age: The age of teh dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
