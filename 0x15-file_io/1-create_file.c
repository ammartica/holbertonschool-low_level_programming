#include "main.h"


/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: -1 if FAIL or 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len = write(fd, text_content, strlen(text_content));

	close(fd);

	if (len == -1)
		return (-1);

	return (1);
}
