#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: The first string
 * @s2: the second string
 *
 * Return: pointer to newly allocated space in memory containing the
 * concatenated content of s1 and s2. Else NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	str = malloc((sizeof(char) * l) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;

	while (k < l)
	{
		if (k <= i)
			str[k] = s1[k];
		if (k >= i)
			str[k] = s2[j];
		j++;
	}
	str[k] = '\0';
	return (str);
}
