#include <stdio.h>

/**
 * main - print numbers separated by commas
 * Return: nothing
 **/
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		putchar(46);
		putchar(32);
	}

	putchar('\n');

	return (0);
}
