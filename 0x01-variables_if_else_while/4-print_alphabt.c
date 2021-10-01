#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q and e, followed by a new line
 * Return: nothing
**/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);

		if (c == 'e' || c == 'q')
		{
			continue;
		}
	}

	putchar('\n');

	return (0);
}
