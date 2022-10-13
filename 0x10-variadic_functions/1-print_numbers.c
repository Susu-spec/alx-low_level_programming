#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print list of argument values
 * @seperator: char pointer
 * @n: number of int arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, value;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%i", value);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

