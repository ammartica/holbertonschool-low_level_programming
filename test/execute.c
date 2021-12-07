#include "main.h"

/**
 * execute_command - executes a command
 * @tokens - list of commands to be executed
 *
 * Return: VOID
 */
int execute_child(char **tokens, int stat)
{
	pid_t child;
	int status;

	child = fork();
	if (child == -1)
	{
		perror("./shell");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
		{
			perror("./shell");
			free(tokens);
			exit(EXIT_FAILURE);
		}
		exit(EXIT_SUCCESS);
	}
	else
	{
		if (stat == 1)
			free(tokens[0]);
		
		free(tokens[0]);
		waitpid(child, &status, WUNTRACED);
	}
	return (1); /*IDK if this is right*/
}
