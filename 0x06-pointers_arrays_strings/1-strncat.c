#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates n amount of string to another string
 * @dest: string to be concatenated to
 * @src: string that will be concatenated
 * @n: amount of bytes to be concatenated
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}
