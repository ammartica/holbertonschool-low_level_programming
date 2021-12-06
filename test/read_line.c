#include "main.h"

/**
 * read_line - reads user input
 *
 * Return: string of user input
 */
char *read_line(void)
{
	int i = 0, line;
	size_t buffsize = 0;
	char *buffer = (char *)malloc(buffsize * sizeof(char));

	if (buffer == NULL)
		exit(EXIT_FAILURE);

	line = getline(&buffer, &buffsize, stdin);


/*	printf("what is inside line?: %d\n", line);*/

	/* if ctrl + d then exit */
	if (line == EOF)
		exit(EXIT_SUCCESS);

	/*transforms enter into null byte*/
	while (buffer[i] != '\n')
		i++;
	buffer[i] = '\0';

	return (buffer);
}

