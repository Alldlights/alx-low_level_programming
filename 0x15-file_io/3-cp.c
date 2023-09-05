#include "main.h"
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - prints error message
 * @exit_code: code to exit the error
 * @format: message format
 * @arg: arg to program
 *
 * Return: Nothing
 */
void error_exit(int exit_code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(exit_code);
}

/**
 * main - Entry to program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_src, fd_dest;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", argv[0]);

	fd_src = open(file_from, O_RDONLY);
	if (fd_src == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	fd_dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd_dest == -1)
		error_exit(99, "Error: Can't write to file %s\n", file_to);

	while ((bytes_read = read(fd_src, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to file %s\n", file_to);
	}
	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	if (close(fd_src) == -1 || close(fd_dest) == -1)
		error_exit(100, "Error: Can't close fd\n", strerror(errno));
	return (0);
}

