#include "main.h"

int _strlen(char *s);

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string to be returned
 * Return: a string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
