#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: value to be swapped
 * @b: value to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;

	*b = *a - *b;

	*a = *a - *b;
}
