#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char c;
	int count = 0;

	while (count < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
		count++;
	}
	return;
}
