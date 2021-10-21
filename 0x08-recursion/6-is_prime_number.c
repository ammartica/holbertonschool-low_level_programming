#include "main.h"

int prime_check(int f, int p);

/**
 * is_prime_number - verifies if number is a prime number
 * @n: number to be verified
 * Return: 1 if n is a prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (prime_check(2, n));
}

/**
 * prime_check - checks to see if number is prime
 * @f: factor check
 * @p: possible prime number
 *
 * Return: 1 if prime, 0 if not
 */
int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}
