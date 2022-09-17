#include "main.h"
/**
 * print_square - print '#' size times
 * @size: int argument
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size <= 0)
			{
				break;
			}
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
