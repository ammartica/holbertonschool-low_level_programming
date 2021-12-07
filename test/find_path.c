#include "main.h"

/**
 * find_path - finds path
 *
 * Return: the path
 */
char **find_path()
{
	int i = 0;
	char **path;

	while (environ[i])
	{
		if (environ[i][0] == 'P' && environ[i][2] == 'T')
			path = _which(environ[i]);
		i++;
	}
	return (path);
}

/**
 * _which - finds value of path var
 * @path: path to search value of
 *
 * Return: value of path var
 */
char **_which(char *path)
{
	int i = 0;
	char *copy_path = NULL, *tokens = NULL, *deli = ":=";
	char **dir = malloc(sizeof(char *));

	if (path == NULL)
	{
		free(path);
		return (0);
	}
	if (dir == NULL)
	{
		free(path);
		perror("Error allocated memory");
		return (NULL);
	}

	copy_path = _strdup(path);
	tokens = strtok(copy_path, deli);
	while (tokens != NULL)
	{
		dir[i] = tokens;
		i++;
		tokens = strtok(NULL, deli);
	}
	return (dir);
}
