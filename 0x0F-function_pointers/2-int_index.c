#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array to search in
 * @size: size of the array
 * @cmp: function that compares values
 *
 * Return: index for first element of cmp that is not 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
