#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: bytes used to search in s
 * Return: pointer to byte in s that matches byte in accept or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return ('\0');

	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return ('\0');
}
