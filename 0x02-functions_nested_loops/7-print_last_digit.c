#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the number to be worked on
 * Return: the value of the last digit
 */
int print_last_digit(int r)
{
	int lastDigit;

	lastDigit = r % 10;

	return (lastDigit);
}
