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
	if (length % 2 == 1)
	{
		half = ((length - 1) / 2);
	}
	else
	{
		half = (length / 2);
	}
	for (i = half; i <= length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

