#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len, n;

	len = _strlen(str);

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;

		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		n = len / 2;
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

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
