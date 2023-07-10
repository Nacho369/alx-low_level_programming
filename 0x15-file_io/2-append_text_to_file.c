#include "main.h"


/**
 * append_text_to_file - A function that appends text at the end
 * of a file.
 *
 * @filename: Name of the file to append to
 * @text_content: Content to write/append to the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t size, len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);

	if (file == -1)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	if (text_content == NULL)
	{
		if (file != -1)
			return (1);
		else
			return (-1);
	}

	size = write(file, text_content, len);

	if (size == -1)
		return (-1);

	return (1);
}
