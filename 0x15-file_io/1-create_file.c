#include "main.h"
#include <fcntl.h>

/**
 * create_file - a function that creates a file
 * @filename: the file to be created
 * @text_content: the NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, bytes_read = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[bytes_read])
			bytes_read++;
		bytes_written = write(fd, text_content, bytes_read);
		if (bytes_written != bytes_read)
			return (-1);
	}

	close(fd);

	return (1);
}

