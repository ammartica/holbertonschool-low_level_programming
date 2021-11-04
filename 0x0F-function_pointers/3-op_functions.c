#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: total of sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: total after substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: total multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: total after division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modular division of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: total of modular division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
