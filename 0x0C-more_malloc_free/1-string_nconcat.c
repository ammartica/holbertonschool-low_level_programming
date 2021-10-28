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
	unsigned int i, j, k = 0, l, m;
	char *a = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = _strlen(s1);
	j = _strlen(s2);

	if (n >= j)
		n = j;
	else
		j = n;

	k = i + j;
	a = malloc(sizeof(char) * k + 1);

	if (a == NULL)
		return (NULL);

	for (l = 0; s1[l] != '\0'; l++)
	{
		a[l] = s1[l];
	}

	for (m = 0; m < n; m++)
	{
		a[l] = s2[m];
		l++;
	}

	a[l] = '\0';


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
