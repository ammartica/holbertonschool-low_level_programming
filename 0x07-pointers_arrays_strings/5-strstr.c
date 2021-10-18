#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string the substring will be searched in
 * @needle: substring to search
 * Return: pointer to beginning of found substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	size_t need_len;

	need_len = strlen(needle);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (!strncmp(haystack, needle, need_len))
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
