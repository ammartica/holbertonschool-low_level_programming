#include "main.h"

/**
 * execute_builtins - executes built in functions
 * @tokens: array of strings that hold the built-in function to execute
 *
 * Return: 0 if successful or 1 if failure
 */
void execute_builtins(char **tokens)
{
	int i = 0, length;

	bi builts[] = {
		{"exit", ex},
		{"env", display_env},
		{NULL, NULL}
	};

	if (tokens[0] == NULL)
		return;

	length = _strlen(tokens[0]);

	while (builts[i].n != NULL)
	{
		if (_strcmp(tokens[0], builts[i].n))
		{
			builts[i].f();
			return;
		}
	}
}
