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
	char *ptr;

	ptr = haystack;

	while (*ptr)
	{
		if (strncmp(ptr, needle, strlen(needle)) == 0)
			return (ptr);
		ptr++;
	}
	return ('\0');
}
