#include "main.h"
#include <stdlib.h>

/**
 * array_rang - create array of values from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * max - min + 1);
	if (array == NULL)
		return (NULL);
	j = 0;
	i = min;
	while (j <= max - min)
	{
		array[j++] = i++;
	}
	return (array);
	free(array);
}
