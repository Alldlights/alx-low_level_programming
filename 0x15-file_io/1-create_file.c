#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, else -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t write_byt;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		write_byt = write(file, text_content, _strlen(text_content));
		if (write_byt == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

/**
 * _strlen - Function the returns the lenght of a string
 * @str: NULL terminated string
 * Return: Lenght of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}



