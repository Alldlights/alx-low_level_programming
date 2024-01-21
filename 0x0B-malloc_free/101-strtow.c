#include "main.h"
#include <string.h>

/**
 * strtow - Function that splits a string into words
 * @str: The string to split
 * Return: A pointer to an array of strings
 */
char **strtow(char *str)
{
	char **ptr;
	char *new;
	int  word_count = 0, len_str, word_len, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	len_str = strlen(str) + 1;
	ptr = malloc(sizeof(char *) * len_str);
	if (ptr == NULL)
		return (NULL);
	new = str;
	while (*new != '\0' && new != NULL)
	{
		while (*new != '\0' && (*new == ' ' || *new == '\t' ||
					*new == '\n'))
			new++;
		if (*new == '\0')
			break;
		word_len = 0;
		while (new[word_len] != ' ' && new[word_len] != '\0')
			word_len++;
		ptr[word_count] = malloc(sizeof(char) * (word_len + 1));
		if (ptr[word_count] == NULL)
		{
			for (j = 0; j < word_count; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (k = 0; k < word_len; k++)
			ptr[word_count][k] = new[k];
		ptr[word_count][word_len] = '\0';
		new += word_len;
		word_count++;
	}
	ptr[word_count] = NULL;
	return (ptr);
}
