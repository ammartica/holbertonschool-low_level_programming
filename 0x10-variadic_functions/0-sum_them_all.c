#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: number of parameters
 * ...: the rest of the parameters
 *
 * Return: the sum of the parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
