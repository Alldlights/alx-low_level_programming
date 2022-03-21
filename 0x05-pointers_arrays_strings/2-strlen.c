#include "main.h"
/**
 * int_strlen - function that returns length of a string
 * @s: pointer to the string
 * Return: void
 */
int strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
