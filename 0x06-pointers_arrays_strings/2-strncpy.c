#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: where the string will be copied to
 * @src: string to be copied
 * @n: total characters to be copied
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
