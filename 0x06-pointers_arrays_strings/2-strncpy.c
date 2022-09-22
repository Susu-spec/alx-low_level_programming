#include "main.h"
#include <string.h>

/**
 * _strncpy - copies n bytes from src string
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to be copied
 * Return: copied string pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}
