#include "main.h"
/**
 * _isupper - checks for uppercase char
 *
 * @c: int argument
 *
 * Return: 0
 */
int _isupper(int c)
{
	c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
