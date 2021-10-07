#include "main.h"

/**
 * times_table - Prints the 9 times table, startin with 0
 * Return: nothing
 */
void times_table(void)
{
	int leftNum, rightNum, result;

	for (leftNum = 0; leftNum < 10; leftNum++)
	{
		for (rightNum = 0; rightNum < 10; rightNum++)
		{
			result = leftNum * rightNum;

			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');

				spaces(leftNum, rightNum);
			}
			else
			{
				_putchar(result + '0');

				spaces(leftNum, rightNum);
			}
		}
	}
}

/**
 * spaces - verifies amount of spaces needed based on location
 * @leftNum: is used to verify location of output
 * @rightNum: is used to verify location of output
 * Return: nothing
 */
void spaces(int leftNum, int rightNum)
{
	if (rightNum == 9)
		_putchar('\n');
	else
	{
		_putchar(',');

		if ((leftNum * (rightNum + 1)) >= 10)
			_putchar(' ');
		else
		{
			_putchar(' ');
			_putchar(' ');
		}
	}
}
