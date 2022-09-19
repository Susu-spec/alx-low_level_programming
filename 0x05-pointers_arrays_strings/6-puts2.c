#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2- prints every other character
 * @str: string parameter
 */

void puts2(char *str)
{
	int i, n;

	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		_putchar(*(str + i));
	}
	_putchar('\n');
}
