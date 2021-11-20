#include "main.h"

/**
 * flip_bits - counts number of bits from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: total of numbers flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int count, i;

	count = 0;
	check = 1;
	diff = n ^ m;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diff & check))
			count++;

	check <<= 1;
	}

	return (count);
}
