#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by \n
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: VOID
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
