#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte to fill memory with
 * @n: amount of bytes of the memory area
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
	{
		s[i] = b;
		s++;
		n--;
	}
	return (s);
}
