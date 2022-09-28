#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: char to be located
 * Return: char pointer
 */

char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);

	return (p);
}
