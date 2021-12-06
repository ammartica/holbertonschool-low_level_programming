#include "main.h"

/**
 * prompt - displays prompt and waits for input
 *
 * Return: VOID
 */
void prompt(void)
{
	char *prompt = "#cisfun$ ";
	write(STDOUT_FILENO, prompt, _strlen(prompt));
}
