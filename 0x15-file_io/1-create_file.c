#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: the name of the file you want to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fp, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(fp, text_content, len);

	if (fp == -1 || wrt == -1)
		return (-1);

	close(fp);

	return (1);
}
