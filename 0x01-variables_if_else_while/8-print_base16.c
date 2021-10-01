#include <stdio.h>

/**
 * main - print numbers in hexadecimal in lowercase
 * Return: nothing
 **/
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	for (num = 97; num <= 102; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
