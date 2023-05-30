#include "main.h"

/**
 * *_strcpy - function that copies the string pointed by a variable to another
 * variable.
 * @dest: pointer to varibale to copy into.
 * @src: pointer to variable to copy from.
 *
 * Return: the value of pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
