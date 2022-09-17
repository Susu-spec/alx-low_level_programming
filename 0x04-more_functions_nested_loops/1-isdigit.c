#include "main.h"

/**
 * _isdigit - checks if arg is a digit
 * @c: integer argument
 * Return: 1 indicates success, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
