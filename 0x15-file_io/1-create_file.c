#include <stdio.h>

/**
 * _strlen - Function that returns lenght of a string
 * @str: String to calculate its lenght
 *
 * Return: Lenght of string
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: the name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_len = _strlen(text_content);
		bytes_written = write(fd, text_content, text_len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

