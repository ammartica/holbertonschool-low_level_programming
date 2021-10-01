#include <stdio.h>

/**
 * main - print numbers in hexadecimal in lowercase
 * Return: nothing
 **/
int main(void)
{
	int num;

	for (num = 30; num <= 39; num++)
	{
		putchar(num);
	}

	for (num = 61; num <= 66; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
