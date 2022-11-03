#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content written in the files
 * Return: 1 if success. else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nl;
	int x;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nl = 0; text_content[nl]; nl++)
		;

	x = write(fd, text_content, nl);

	if (x == -1)
		return (-1);

	close(fd);

	return (1);
}