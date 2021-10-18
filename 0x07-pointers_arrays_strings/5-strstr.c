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
	size_t n = strlen(needle);

	while (*haystack)
	{
		if (!memcmp(haystack, needle, n))
		{
			return (haystack);
		}
		haystack++;
	}
	return (haystack);
}
