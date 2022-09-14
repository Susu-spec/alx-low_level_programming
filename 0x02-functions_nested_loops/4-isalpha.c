#include "main.h"

/**
 * _isalpha - check if alphabet char
 *
 * @c: argument
 *
 * Return: 1 - indicates alphabet character 0 indicates otherwise
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

