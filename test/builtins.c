#include "main.h"

/**
 * _exit - exits from shell
 *
 * Return: VOID
 */
void ex(void)
{
	/*insert exit code here :P*/
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

