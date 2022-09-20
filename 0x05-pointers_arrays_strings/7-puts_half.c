#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints later half of string
 * @str: string parameter
 */
void puts_half(char *str)
{
	int i, length, half;

	length = strlen(str);
	half = (length - 1) / 2;
	for (i = half + 1; i <= length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

