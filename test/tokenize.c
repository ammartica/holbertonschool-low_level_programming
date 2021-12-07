#include "main.h"

/**
 * tokenize_input - receives input and converts it into tokens
 * @line: input string to be tokenized
 *
 * Return: array of tokens
 */
char **tokenize_input(char *line)
{
	int i = 0;
	char **token = malloc(1024 * sizeof(char *));

	if (line == NULL)
		return (0);

	if (token == NULL)
	{
		perror("ERROR\n");
		free(token);
		exit(EXIT_FAILURE);
	}

	token[i] = strtok(line, " ");
	while (token[i])
	{
		token[i + 1] = strtok(NULL, " ");
		i++;
	}
	token[i] = NULL;

	/* exit built-in command */
	if ((_strcmp(token[0], "exit") == 0) && token[1] == NULL)
	{
		free(line);
		free(token);
		exit(0);
	}


	/* env built-in command */
	if ((_strcmp(token[0], "env") == 0) && token[1] == NULL)
		display_env();

	return (token);
}
