#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - print char type
 * @c: char to be printed
 * Return: VOID
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - prints int type
 * @i: int to be printed
 * Return: VOID
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints float type
 * @f: float to be printed
 * Return: VOID
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_s - prints string type
 * @s: string to be printed
 * Return: VOID
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 * Return: VOID
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	print_type p[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list list;
	char *separator = "";

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (p[j].type != NULL)
		{
			if (*(p[j].type) == format[i])
			{
				printf("%s", separator);
				p[j].f(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
