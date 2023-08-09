#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - a funtion that appends text to a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) != 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	bytes_written = write(fd, text_content, sizeof(text_content));
	if (bytes_written < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
