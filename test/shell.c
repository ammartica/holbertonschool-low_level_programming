#include "main.h"

/**
 * main - simple shell
 *
 * Return: 1
 */
int main(void)
{
	char *user_input;
	char **tokens;


	while (1)
	{
		/*prompt*/
		prompt();

		/*receives user input and stores it in user_input*/
		user_input = read_line();

		/* tokenizes user_input */
		tokens = tokenize_input(user_input);

		if ((_strcmp(tokens[0], "\n") != 0) && _strcmp(tokens[0], "env"))
		/*	path = get_path();
			status = stat(tokens, path);*/
			execute_child(tokens);


	/*makes a child in order to execute command (must make into a function)
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
			wait(&status);*/
	}

	return (1);
}
