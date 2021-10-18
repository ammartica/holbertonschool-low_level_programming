#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: points to copy of memory area
 * @src: points to original memory area
 * @n: total bytes to be copies
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
