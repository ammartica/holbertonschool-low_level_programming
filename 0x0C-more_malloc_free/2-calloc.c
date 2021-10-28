#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: amount of bytes of each element in array
 * Return: pointer to alloc mem or NULL if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int sizeInBytes;

	sizeInBytes = nmemb * size;

	if (sizeInBytes == 0)
		return (NULL);

	p = malloc(sizeInBytes);

	if (p != NULL)
		memset(p, 0, sizeInBytes);
	else
		return (NULL);

	return (p);
}
