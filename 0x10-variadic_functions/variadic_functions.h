#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>


/**
 * struct print - choose corresponding print function
 * @type: data type
 * @f: print function type belongs to
 */
typedef struct print
{
char *type;
void (*f)(va_list);
} print_type;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
