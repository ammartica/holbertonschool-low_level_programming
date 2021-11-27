#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: -1 if FAIL or 1 if success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len = write(fd, text_content, strlen(text_content));

	close(fd);

	if (len == -1)
		return (-1);

	return (1);
}
