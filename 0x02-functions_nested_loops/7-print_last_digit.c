#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: the number to be worked on
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
	int lastDigit;

	if (num < 0)
	{
		num = num * -1;
		lastDigit = num % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}

	else
	{
		lastDigit = num % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
