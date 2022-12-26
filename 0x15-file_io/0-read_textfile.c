#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it
 * @filename: Pointer 
 * @letters: No. of letters to be read and printed
 *
 * Return: 0 - If it fails or filename = NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		reurn (0);

	op = open(filename, 0_RDONLY);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (op == -1 || re == -1 || wr == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	closw(op);

	return (wr);
}
