#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a mem block using malloc and free
 * @ptr: previous mem
 * @old_size: previous bytes of size allocated
 * @new_size: new bytes of size allocated
 *
 * Return: pointer to newly allocated memeory or null if nothing assigned
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *new_p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	new_p = malloc(new_size * sizeof(char));
	if (new_p == NULL)
		return (NULL);
	a = 0;
	if (new_size > old_size)
	{
		while (a < old_size)
		{
			new_p[a] = ((char *)ptr)[a];
			a++;
		}
		free(ptr);
		return (new_p);
	}
	while (a < new_size)
	{
		new_p[a] = ((char *)ptr)[a];
		a++;
	}
	free(ptr);
	return (new_p);
}
