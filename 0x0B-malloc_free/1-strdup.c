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
	unsigned int length;
	char *new;

	length = 0;
	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
	{
		length++;
	}
	new = malloc(sizeof(char) * length + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i< length; i++)
	{
		new[i] = str[i];
	}
	new[length] = '\0';
	return (new);
}
