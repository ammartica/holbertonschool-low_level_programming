#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if correct
 */
int main(int argc, char *argv[])
{
	int total = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", total);

	return (0);
}
