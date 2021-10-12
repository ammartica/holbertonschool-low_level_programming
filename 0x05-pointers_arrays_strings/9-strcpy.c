#include "main.h"

/**
 * _strcpy - copies string to buffer
 * @dest: points to buffer
 * @src: points string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
