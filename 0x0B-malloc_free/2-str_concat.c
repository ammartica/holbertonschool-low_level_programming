#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated strings or NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, total_len, i = 0;
	char *a;

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2 + 1;
	a = malloc(total_len);

	while (*s1 != '\0')
	{
		a[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		a[i] = *s2;
		s2++;
		i++;
	}

	return (a);
}
