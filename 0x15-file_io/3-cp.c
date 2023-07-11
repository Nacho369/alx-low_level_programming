#include "main.h"

void close_file(int file_d);

/**
 * main - A program that copies the content of a file to another
 * file.
 *
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: 0 (Success) else 1 (Error)
 */
int main(int ac, char **av)
{
	int file_f, file_t;
	const char *file_to, *file_from;
	ssize_t bytes_rd = BUFF_SIZE, bytes_wr;
	char buff[BUFF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO,
		"Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = av[1];
	file_to = av[2];

	file_f = open(file_from, O_RDONLY);
	if (file_f == -1)
	{
		dprintf(
		STDERR_FILENO,
		"Error: Can't read from file %s\n", file_from);
			exit(98);
	}

	file_t = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_t == -1)
	{
		dprintf(
		STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while (bytes_rd == BUFF_SIZE)
	{
		bytes_rd = read(file_f, buff, BUFF_SIZE);
		if (bytes_rd == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from
			);
			exit(98);
		}

		bytes_wr = write(file_t, buff, BUFF_SIZE);
		if (bytes_wr == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	close_file(file_f);
	close_file(file_t);

	return (0);
}


/**
 * close_file - A function that closes a file
 *
 * @file_d: File descriptor of the opened file
 *
 * Return: void
 */
void close_file(int file_d)
{
	if (close(file_d) == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}
