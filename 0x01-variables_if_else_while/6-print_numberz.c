#include <stdio.h>

/**
 * main - prints numbers from 0-9 followed by newline
 * Return: nothing
 */
int main(void)
{
	int num;

	for (num = 97; num < 107; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
