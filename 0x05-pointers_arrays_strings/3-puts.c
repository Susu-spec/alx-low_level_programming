#include "main.h"
#include <stdio.h>

/**
 * _puts - write a string output to stdout
 * @str: string parameter
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		putchar(*(str + i));
	}

	putchar('\n');
}
