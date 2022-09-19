#include "main.h"

/**
 * _strlen - returns length of string
 * @s: argument value
 * Return: length of string
 */

int _strlen(char *s);
{
	int length;

	while (*s != '\0')
	{
		length++;
	}

	return (length);
}
