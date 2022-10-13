#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print list of argument values
 * @seperator: char pointer
 * @n: number of int arguments
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, value, a;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		if (i == n - 1)
		{
			printf("%i", value);
		}
		else
		{
			printf("%i", value);
			if (seperator != NULL)
			{
				for (a = 0; a < 2; a++)
				{
					printf("%c", seperator[a]);
				}
			}
		}
	}
	va_end(args);
	printf("\n");
}

