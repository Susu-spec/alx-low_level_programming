#include "main.h"
#include <string.h>

/**
 * _memcpy - copies..
 * @n: number of bytes
 * @src: from value at src pointer
 * @dest: to value at dest pointer
 * Return: char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
