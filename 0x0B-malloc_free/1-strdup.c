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
	void *new;
	size_t length;

	length = strlen(str) + 1;
	new = malloc(length);
	if (new == NULL)
		return (NULL);
	return ((char *) memcpy(new, str, length));
	free(new);
}
