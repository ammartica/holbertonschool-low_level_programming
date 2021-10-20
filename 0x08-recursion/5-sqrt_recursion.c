#include "main.h"

int sqrt_check(int g, int n);

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: number to check the square root of
 * Return: natural square root or -1 if n has none
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}

/**
 * sqrt_check - checks for the square root of n
 * @g:guess at sqrt
 * @n: number to find sqrt of
 * Return: -1 or sqrt of n
 */
int sqrt_check(int g, int n)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		return (-1);
	return (sqrt_check(g + 1, n));
}
