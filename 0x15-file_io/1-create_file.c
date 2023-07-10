#include "main.h"


/**
 * create_file - A function that creates a file
 *
 * @filename: Name of the file to create
 * @text_content: Content to be written into the file
 *
 * Return: 1 on Success
 * -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t size, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		file = open(filename, O_CREAT, 0600);
		if (file == -1)
			return (-1);

		return (1);
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	size = write(file, text_content, len);
	if (size == -1)
		return (-1);

	close(file);
	return (1);
}
