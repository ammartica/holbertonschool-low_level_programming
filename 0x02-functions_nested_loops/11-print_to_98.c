#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to count until 98
 * Return: nothing
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
		}
		n++;
	}

	while (n > 99)
	{
		printf("%d, ", n);
		n--;

		if (n == 99)
		{
			printf("%d, ", n);
			n--;
		}
		if (n == 98)
		{
			printf("%d\n", n);
		}
	}
}
