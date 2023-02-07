#include "main.h"

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
 * if write fails or does bot write the expected amount
 * of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	File *fp;
	size_t i = 0;
/*	File *fopen(char *filename, char *r);*/
	fp = fopen(filename, "r");
	if (filename == NULL)
		return (0);

	if (fp == NULL)
		return (0);

	while (getc(fp) != EOF || i < letters)
	{
		getc(fp);
		i++;
	}
	
	fclose(fp);
	return (i);
}
