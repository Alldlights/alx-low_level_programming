#include "main.h"

/**
 * main - Program that copies the content of one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_dest, read_bytes;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	while ((read_bytes = read(fd_src, buf, BUFSIZ)) > 0)
	{
		if (fd_dest < 0 || write(fd_dest, buf, read_bytes) != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_src);
			exit(99);
		}
	}
	if (read_bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_src) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	if (close(fd_dest) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);
}

