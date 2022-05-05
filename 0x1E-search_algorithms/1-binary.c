#include "search_algos.h"

/**
 * binary_search - search for value in int array using binary search
 * @array: pointer to first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located or -1 if NULL or value not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	while (low < high)
	{
		printf("Searching in array: ");
		for (i = low ; i <= high; i++)
		{
			if (i == high)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}

		printf("\n");
		mid = (low + high) / 2;

		if (array[mid] < value)
			low = mid + 1;
		if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
