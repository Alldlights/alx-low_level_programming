#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: destination string
 * @s2: src string
 * @n: number of bytes on src string
 *
 * Return: pointer to a newly allocated space in memory containing s1,
 * followed by n bytes of s2 and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_con;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	new_con = malloc(sizeof(char) * (i + n + 1));

	if (new_con == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		new_con[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		new_con[i] = s2[j];
		i++, j++;
	}
	new_con[i] = '\0';
	return (new_con);
}
