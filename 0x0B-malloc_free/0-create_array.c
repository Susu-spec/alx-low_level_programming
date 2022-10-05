#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: number of chars
 * @c: char variable
 * Return: a char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	else
	{
		str = malloc(sizeof(c) * size);
		if (str == NULL)
			return (NULL);
	}

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
	free(str);
}
