#include "main.h"

/**
 * read_textfile - Function that reads a file and prints it to the POSIX
 * standard output
 * @filename: the file to read from
 * @letters: number of letters that should be read and printed
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_bytes;
	ssize_t written_bytes;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (written_bytes);
}

