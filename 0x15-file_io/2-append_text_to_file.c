#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * append_text_to_file - function that appends a file at the end of a file
 * @filename: name of the file
 * @text_content: content to be in the file
 * Return: 1 if the file exists and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd;
	int fd_w;

	if (filename == NULL || text_content == NULL)
		return (-1);


	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	fd_w = write(fd, text_content, strlen(text_content));

	close(fd);

	if (fd_w == -1)
		return (-1);
	return (1);


}
