#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate n bytes of string 2 to string 1
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	size_t len1, len2, i, total;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	total = len1 + n + 1;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * total);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (; i < (len1 + n); i++)
		str[i] = s2[i - len1];
	str[i] = '\0';
	return (str);
	free(str);
}

