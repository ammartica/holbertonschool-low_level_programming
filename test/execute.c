#include "main.h"

/**
 * execute_command - executes a command
 * @tokens - list of commands to be executed
 *
 * Return: VOID
 */
int execute_child(char **tokens)
{
	pid_t child;
	int status;

	child = fork();
	if (child == -1)
	{
		perror("./shell");
		exit(EXIT_FAILURE);
	}
	if (child == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
			perror("./shell");
	}
	else
		wait(&status);

	return (0); /*IDK if this is right*/
}
