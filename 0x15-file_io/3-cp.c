#include "main.h"
/**
 * main - Program that copies a content from a file to another
 * @argc: number of arguments passed to the program
 * @argv: array of arguements
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, cl_frm, cl_to;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprinf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	fd_to = read(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_bytes = read(fd_from, buf, BUFSIZ)) > 0)
	{
		if (fd_to < 0 || write(fd_to, buf, read_bytes) != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			exit(99);
		}
	}
	if (read_bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cl_frm = close(fd_from);
	cl_to = close(fd_to);
	if (cl_frm < 0 || cl_to < 0)
	{
		if (cl_from < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		if (cl_to < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
