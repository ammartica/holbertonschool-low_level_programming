#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated strings or NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j, k, l;
	char *a;

	/* length of first string */
	if (s1 == NULL)
		i = 0;

	else
	{
		for (i = 0; s1[i]; i++)
			;
	}

	/* length of second string */
	if (s2 == NULL)
		j = 0;

	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	/* allocate memory */
	k = i + j + 1;
	a = malloc(k * sizeof(char));

	/* concatenate strings */
	if (a == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
		a[l] = s1[l];

	for (l = 0; l < j; l++)
		a[l + i] = s2[l];

	a[i + j] = '\0';

	return (a);
}
