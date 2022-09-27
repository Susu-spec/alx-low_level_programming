#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string
 * @accept: substring
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;

	count = strspn(s, accept);

	return (count);
}
