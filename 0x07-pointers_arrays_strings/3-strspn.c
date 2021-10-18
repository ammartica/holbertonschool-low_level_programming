#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes of s
 * Return: total of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return (len);

	while (*s && strchr(accept, *s++))
	{
		len++;
	}

	return (len);
}
