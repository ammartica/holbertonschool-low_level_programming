#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: array to be reversed
 * @n: total number of elements in array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
