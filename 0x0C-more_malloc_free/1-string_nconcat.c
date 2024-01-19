#include "main.h"
#include <string.h>

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: n bytes of string to concatenate
 * Return: Pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int str1, str2, total_len;

	str1 = strlen(s1);
	str2 = strlen(s2);
	total_len = str1 + str2 + 1;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < str1 ; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		str[str1 + i] = s2[i];
	}

	str[total_len - 1] = '\0';
	return (str);
}




	


