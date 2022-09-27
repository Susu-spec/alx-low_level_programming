#include "main.h"
#include <string.h>

/**
 * _strstr - locates substring without null terminating byte
 * @haystack: string
 * @needle: substring
 * Return: pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);
	return (p);
}
