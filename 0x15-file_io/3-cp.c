#include "main.h"

char *buffer(char *file);
void close_file(int fl);

/**
 * buffer - Allocates 1024 bytes.
 * @file: name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *buffer(char *file)
{
	char *str;

	str = malloc(sizeof(char) * 1024);

	if (str == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (str);
}

/**
 * close_file - Closes file descriptors.
 * @fl: file descriptor to closed.
 */
void close_file(int fl)
{
	int cVal;

	cVal = close(fl);

	if (cVal == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int from, to, rd, wrt;
	char *str;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	str = buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, str, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(str);
			exit(98);
		}

		wrt = write(to, str, rd);
		if (to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(str);
			exit(99);
		}

		rd = read(from, str, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(str);
	close_file(from);
	close_file(to);

	return (0);
}
