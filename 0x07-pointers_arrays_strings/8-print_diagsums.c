#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - prints the sum of two diagonals of a matrix of ints
 * @a: array
 * @size: size of array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum1, matrix;

	sum = 0;
	sum1 = 0;
	matrix = size * size;

	for (i = 0; i < matrix; i += (size + 1))
	{
		sum += a[i];
	}

	for (i = (size - 1); i < matrix; i += (size - 1))
	{
		sum1 += a[i];
		matrix--;
	}

	printf("%d, %d\n", sum, sum1);
}
