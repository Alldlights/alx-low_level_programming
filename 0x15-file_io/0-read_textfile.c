#include "main.h"

/**
 * read_textfile - Function that reads a text file and print it to
 * the POSIX standard output
 * @filename: The name of the file to read from
 * @letter: The number of letters it should read and print
 * Return: The number of letters read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buf;
	ssize_t bytes_read;

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		fclose(fp);
		return (0);
	}
	bytes_read = fread(buf, sizeof(char), letters, fp);
	if (bytes_read < 0)
	{
		fclose(fp);
		free(buf);
		return (0);
	}
	if (write(STDOUT_FILENO, buf, bytes_read) != bytes_read)
	{
		fclose(fp);
		free(buf);
		return (0);
	}
	fclose(fp);
	free(buf);
	return (bytes_read);
}
