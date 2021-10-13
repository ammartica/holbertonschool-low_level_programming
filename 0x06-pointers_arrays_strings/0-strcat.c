#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string that will be concatenated
 * Return: pointer to the concatenated string dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest);
}
