#include "main.h"
/**
 * print_line - prints '_' n times
 */

void print_line(int n)
{
	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
