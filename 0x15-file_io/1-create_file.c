#include "main.h"

/**
 * create_file - creates file
 * @filename: A pointer
 * @text_content: A pointer
 *
 * Return: If func fails - (-1)
 * Otherwise = (1)
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
