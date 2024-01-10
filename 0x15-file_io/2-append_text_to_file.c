#include "main.h"

/**
 * append_text_to_file - Function that appends at the end of a file.
 * @filename: The name of the file
 * @text_content: string to add at end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, str_len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[str_len])
			str_len++;
		bytes_written = write(fd, text_content, str_len);
		if (bytes_written != str_len)
			return (-1);
	}
	close(fd);

	return (1);
}