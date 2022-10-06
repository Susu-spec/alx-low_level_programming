#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for array of ints and set to zero
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	array = malloc(nmemb * size);
	if (array == NULL || nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		array[i] = 0;
	return (array);
	free(array);
}

