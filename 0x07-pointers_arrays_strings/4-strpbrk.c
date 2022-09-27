#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for a set number of bytes
 * @s: a string
 * @accept: substring/ set number of bytes
 * Return: pointer to byte in "s" that matches "accept"
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	p = strpbrk(s, accept);
	return (p);

}
