#include "main.h"
#include <stdlib.h>
unsigned int _strlen(char *s);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: string to concatenate
 * @n: total of s2 to concatenate
 * Return: pointer to allocated space that contains the concat or NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *a = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len  = _strlen(s1);

	if (n < _strlen(s2))
		len += n;
	else
		len += _strlen(s2);

	a = malloc(sizeof(char) * len + 1);

	if (a == NULL)
		return (NULL);

	for (len = 0; s1[len] != '\0'; len++)
	{
		a[len] = s1[len];
	}

	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		a[len] = s2[i];
		len++;
	}
	a[len] = '\0';

	return (a);
}

/**
 * _strlen - finds length of a string
 * @s: string
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
