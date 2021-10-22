#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if correct
 */
int main(int argc, char *argv[])
{
	int num1, num2, total;

	if (argc < 3 || argc > 3)
	{
		printf("Error");
		return (1);
	}

	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		total = num1 * num2;
		printf("%d", total);
	}

	return (0);
}
