#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: counter of arguments
 * @argv: vector of arguments
 * Return: 0 if correct
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;

	for (i = 0; i < argc - 1; i++)
	;
		printf("%d\n", i);
	return (0);
}
