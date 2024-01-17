#include "main.h"
#include <string.h>

/**
 * argstostr - Function that concatenates all the arguments of
 * a program
 * @ac: argument count
 * @av: argument vector
 * Return: A pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int total_size = 0, idx = 0, i, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		total_size += strlen(av[i]) + 1;
	str = malloc(total_size + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		s = av[i];
		for (j = 0; s[j] != '\0'; j++)
			str[idx++] = s[j];
		str[idx++] = '\n';
	}
	str[idx] = '\0';
	return (str);
}
