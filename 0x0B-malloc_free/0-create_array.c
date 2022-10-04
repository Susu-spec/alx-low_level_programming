#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: number of chars
 * @c: char variable
 * Return: a char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return (NULL);
	else
	{
		str = malloc(sizeof(char) * size);
		if (str == NULL)
			return (NULL);
	}
	return (str);
}
