#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: null-terminated string
 * to write to the file
 *
 * Return: 1 on success. -1 on failure
 * -1 if filename is NULL. If text_cintent
 *  is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int len = 0;
	int i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; *(text_content + i) != '\0'; i++)
		       len++;	
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
