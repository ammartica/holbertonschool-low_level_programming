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
	unsigned int i, j, k = 0, l;
	char *a = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	;

	for (j = 0; s2[j] && j < n; j++)
	:
	k = (i + j) - 1;

	a = malloc(sizeof(char) * k);

	for (l = 0; s1[l] != '\0'; l++)
		a[l] = s1[l];

	for (j = 0; s2[j] != '\0' && j < n; l++, j++)
		a[l] = s2[j];
	a[k] = '\0';
	return (a);
}
