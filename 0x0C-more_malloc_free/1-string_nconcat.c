#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: string to concatenate
 * @n: total of s2 to concatenate
 * Return: pointer to allocated space that contains the concat or NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *a;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	k = i + j + 1;
	a = malloc(sizeof(char) * k);
	if (a == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		a[l] = s1[l];
	for (l = 0; l < j; l++)
		a[i + l] = s2[l];
	a[i + j] = '\0';
	return (a);
}
