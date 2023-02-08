#include "main.h"

/**
 * append_text_to_file - appends
 * to the end of a file
 * @filename: name of file
 * @text_content: null-terminated
 * string
 *
 * Return: 1 if it succeeds,
 * otherwise return -1, if filename
 * is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;
	int len = 0;
	int i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; *(text_content + i) != '\0'; i++)
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
