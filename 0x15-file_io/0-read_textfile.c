#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <sys/file.h>

/**
 * read_textfile - creates a file and prints it
 * to POSIX standard output.
 * @filename: name of file to read from
 * @letters: number of characters it should
 * read and print
 *
 * Return: the actual number of letters it
 * could read and print. If the file cannot be read
 * or opened, returns 0. if filename is NULL return 0
 * if write fails or does not write the expected amount
 * of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (fd == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (wr);
}
