#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up all arguments passed
 * @n: last argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
