#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy string to newly allocated space in memory
 * @str: string to copy in pointer
 * Return: NULL if str = NULL or pointer to copy of string
 */
char *_strdup(char *str)
{
	char *s;
	int len, i;

	if (str == NULL)
		return (NULL);

	/* allocate memory */

	len = strlen(str);
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	/* copy string */
	for (i = 0; i < len; i++)
		s[i] = str[i];

	return (s);
}
