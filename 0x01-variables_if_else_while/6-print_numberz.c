#include <stdio.h>

/**
 * main - prints numbers from 0-9 followed by newline
 * Return: nothing
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
