#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: actual numbers it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int fd_r;
	int fd_w;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	fd_r = read(fd, buff, letters);
	if (fd_r == -1)
	{
		free(buff);
		return (0);
	}
	fd_w = write(STDOUT_FILENO, buff, fd_r);
	if (fd_w == -1)
	{
		free(buff);
		return (0);
	}
	if (fd_r != fd_w)
	{

		return (0);
	}
	free(buff);
	close(fd);
	return (fd_w);
}

