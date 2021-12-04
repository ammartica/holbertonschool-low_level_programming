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

	/* if ctrl + d then exit */
	if (line == EOF)
		exit(EXIT_SUCCESS);

	/*transforms enter into null byte*/
	while (buffer[i] != '\n')
		i++;
	buffer[i] = '\0';

	return (buffer);
}

/**
 * tokenize_input - receives input and converts it into tokens
 * @line: input string to be tokenized
 *
 * Return: array of tokens
 */
char **tokenize_input(char *line)
{
	int i = 0;
	char **token = malloc(50 * sizeof(char *));

	token[i] = strtok(line, " ");

	while (token[i])
	{
		token[i + 1] = strtok(NULL, " ");
		printf("is this repeating itself? #1\n");
		i++;
	}
	token[i] = NULL;

	return (token);
}

/**
 * main - simple shell
 *
 * Return: 0 if SUCCESS
 */
int main(void)
{
	char *user_input;
	pid_t child;
	int status;
	char **tokens;

	while (1)
	{
		/*prompt*/
		printf("#cisfun$ ");

		/*receives user input and stores it in user_input*/
		user_input = read_line();

		/* tokenizes user_input */
		tokens = tokenize_input(user_input);

	/*makes a child in order to execute command (must make into a function)*/
		child = fork();
		if (child == -1)
		{
			perror("./shell");
			return (1);
		}
		if (child == 0)
		{
			printf("is this repeating itself? #2");
			if (execve(tokens[0], tokens, NULL) == -1)
				perror("./shell");
		}
		else
			wait(&status);
	}
	return (0);
}

