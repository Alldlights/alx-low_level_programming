#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defined new struct type
 * @name: dog name
 * @owner: dog's owner
 * @age: dogs age
 *
 * Description: struct type for a dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - Typedef for dof structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, char *owner, float age);
#endif
