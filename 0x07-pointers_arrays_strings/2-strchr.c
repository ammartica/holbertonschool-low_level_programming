#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: points to string
 * @c: character to search for
 * Return: pointer to first time c appears or NULL if not
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}
	return ('\0');
}
