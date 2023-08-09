#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
/**
 * exit_with_error - function that prints error message
 * @exit_code: the exit code to exit
 * @error_msg: the error message to print to the stdout
 *
 * Return: Nothing
 */
void exit_with_error(int exit_code, const char *error_msg)
{
	dprintf(STDERR_FILENO, "%s\n", error_msg);
	exit(exit_code);
}

/**
 * main - program that copies content of a file to another file
 * @argc: argument count parsed to the program
 * @argv: argument vectors
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, close_frm, close_to;
	char buff[BUFSIZ];

	if (argc != 3)
		exit_with_error(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		exit_with_error(98, "Error: Can't read from file");

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((bytes_read = read(fd_from, buff, BUFSIZ)) > 0)
	{
		if (fd_to < 0 || write(fd_to, buff, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			exit(99);
		}
	}

	if (bytes_read < 0)
		exit_with_error(98, "Error: Can't read from file");
	close_frm = close(fd_from);
	close_to = close(fd_to);
	if (close_frm < 0 || close_to < 0)
	{
		if (close_frm < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		if (fd_to < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	       exit(100);
	}
	return (0);
}
