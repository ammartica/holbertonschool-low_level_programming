#include "main.h"
#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100
 * Description: multiples of 3 print Fizz, multiples of 5 print Buzz
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
