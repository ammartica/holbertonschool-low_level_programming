#include "main.h"

/**
 * _exit - exits from shell
 *
 * Return: -1 to exit shell
 */
int ex(void)
{
	return (-1);
}

/**
 * display_env - displays environment variables
 *
 * Return: VOID
 */
int display_env(void)
{
	unsigned int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}

	return (0);
}

