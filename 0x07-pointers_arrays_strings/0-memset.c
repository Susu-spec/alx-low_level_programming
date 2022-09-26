#include "main.h"
#include <string.h>

/**
 * _memset - fills..
 * @n: number of bytes pointed to by..
 * @s: char pointer with the constant..
 * @b: char
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
