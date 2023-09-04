#include "main.h"

/**
 * append_text_to_file - function that appends a text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, written, write_bytes;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write_bytes = 0;
	len = 0;

	while (text_content[len] != '\0')
	{
		len++;
	}

	while (write_bytes < len)
	{
		written = write(fd, text_content + write_bytes, len - write_bytes);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
		write_bytes += written;
	}
	close(fd);
	return (1);
}
