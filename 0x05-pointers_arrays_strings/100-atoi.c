#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _atoi - converts string to integer
 * @c: string parameter
 * Return: converted int
 */

int _atoi(char *c)
{
	unsigned int value = 0;
	int sign = 1;

	while (*c++)
	{
		if (*c == '-')
			sign *= -1;
		else if ((*c >= '0') && (*c <= '9'))
		{
			value = value  * 10 + (int)(*c - '0');
		}
		else if (value > 0)
			break;
	}

	return (value * sign);
}
