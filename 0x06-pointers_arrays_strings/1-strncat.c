#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings using n bytes from the src pointed value
 * @src: source pointer
 * @dest: destination pointer
 * @n: number of bytes to add from src
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}
