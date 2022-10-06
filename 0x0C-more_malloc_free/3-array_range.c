#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of values from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j;

	i = min;
	j = 0;
	if (min > max)
		return (0);
	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (0);
	while (j <= max - min)
	{
		array[j++] = i++;
	}
	return (array);
}
