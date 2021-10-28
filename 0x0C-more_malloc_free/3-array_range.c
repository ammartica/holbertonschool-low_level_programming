#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimun array value
 * @max: maximum array value
 * Return: pointer to array or NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int i, j;
	int *a;

	if (min > max)
		return (NULL);

	j = max - min + 1;

	a = malloc(sizeof(int) * j);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < j; i++, min++)
		a[i] = min;

	return (a);
}
