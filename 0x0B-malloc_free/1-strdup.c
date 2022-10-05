#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated string copy
 * @str: string to be copied
 * Return: char pointer
 */

char *_strdup(char *str)
{
	unsigned int i;
	size_t length;
	char *new;

	length = strlen(str) + 1;
	i = 0;
	if (str == NULL)
		return (NULL);
	new = malloc(length);
	if (new == NULL)
		return (NULL);
	while (i < length)
	{
		new[i] = str[i];
		i++;
	}
	new[length] = '\0';
	return (new);
}
