#include "main.h"

/**
 * main - simple shell
 *
 * Return: 1
 */
int main(void)
{
	char *user_input;
	char **tokens, **path;
	int status = 0;


	while (1)
	{
		/*prompt*/
		prompt();

		/*receives user input and stores it in user_input*/
		user_input = read_line();

		/* tokenizes user_input */
		tokens = tokenize_input(user_input);

		if ((_strcmp(tokens[0], "\n") != 0) && _strcmp(tokens[0], "env"))
		{
			path = find_path();
			status = stat(tokens, path);
			execute_child(tokens, status);
		}
		else
			free(tokens);

		free(user_input);
	}
	return (0);
}
