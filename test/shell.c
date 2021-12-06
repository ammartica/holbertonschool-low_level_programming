#include "main.h"

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
		prompt();

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
			if (execve(tokens[0], tokens, NULL) == -1)
				perror("./shell");
		}
		else
			wait(&status);
	}
	return (0);
}
