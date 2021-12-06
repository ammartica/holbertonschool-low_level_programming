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

	if (token == NULL)
	{
		perror("ERROR\n");
		free(tokens);
		exit(EXIT_FAILURE);
	}

	token[i] = strtok(line, " ");
	while (token[i])
	{
		token[i + 1] = strtok(NULL, " ");
		i++;
	}

	token[i] = NULL;
	return (token);
}
