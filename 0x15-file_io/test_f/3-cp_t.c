#include "main.h"

/**
 * main - copy the content of a file to another file.
 *
 * @argc: number of arguments.
 * @argv: arguments
 *
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int file_f, file_t, bytes_wr;
	ssize_t bytes_rd = 1024;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
		"Usage: cp file_from file_to\n");
		exit(97);
	}

	file_f = open(argv[1], O_RDONLY);
	if (file_f == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file_t == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (bytes_rd == 1024)
	{
		bytes_rd = read(file_f, buff, 1024);
		if (bytes_rd == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		bytes_wr = write(file_t, buff, bytes_rd);
		if (bytes_wr == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(file_f) == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", file_f);
		exit(100);
	}

	if (close(file_t) == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", file_t);
		exit(100);
	}

	return (0);
}
