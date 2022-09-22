#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @x: strin
 * Return: uppercase string
 */

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 'a' &&  x[i] <= 'z')
		{
			x[i] = x[i] - 32;
		}
		i++;
	}

	return (x);
}
