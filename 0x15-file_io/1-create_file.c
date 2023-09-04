#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, written, write_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_bytes = 0;
		len = 0;
		while (text_content[len] != '\0')
			len++;

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
	}

	close(fd);
	return (1);
}
