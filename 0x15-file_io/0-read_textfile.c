#include "main.h"


/**
 * read_textfile - A function that reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: Name of the file to read
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_f, size;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	read_f = read(file, buff, letters);
	if (read_f == -1)
		return (0);

	size = write(STDOUT_FILENO, buff, read_f);
	if (size == -1)
		return (0);

	close(file);
	free(buff);
	return (size);
}
