#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings and returns an integer
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	n = strcmp(s1, s2);
	return (n);
}
