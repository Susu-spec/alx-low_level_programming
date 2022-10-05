#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, i, j, total;
	char *ptr;

	len1 = strlen(s1);
	len2 = strlen(s2);
	total = len1 + len2;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(len1 + len2 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	j = 0;
	while (i < total)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	return (ptr);
	free(ptr);
}
