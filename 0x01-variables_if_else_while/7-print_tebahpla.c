#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * Return: nothing
 */
int main(void)
{
	int letter;

	for (letter = 122; letter > 97; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
