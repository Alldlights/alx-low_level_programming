#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add to the end of the file
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t write_byt;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);
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
 * _strlen - Returns lenght of a string
 * @str: NULL terminated string
 * Return: The lenght of the string
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
