#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - copies string to buffer
 * @dest: points to buffer
 * @src: points string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
