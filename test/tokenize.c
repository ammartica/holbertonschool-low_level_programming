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
	{
		free(line);
		exit(EXIT_FAILURE);
	}

	if (token == NULL)
	{
		free(token);
		perror("ERROR\n");
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
		exit(EXIT_SUCCESS);
	}

	/* env built-in command */
	if ((_strcmp(token[0], "env") == 0) && token[1] == NULL)
		display_env();

	
	return (token);
}


/**
 * display_env - displays environment variables
 *
 * Return: VOID
 */
void display_env(void)
{
	unsigned int i = 0;
	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
