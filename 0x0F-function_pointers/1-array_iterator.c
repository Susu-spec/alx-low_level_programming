#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function parameter on array parameter
 * @array: pointer to first elem of array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size && (array))
	{
		action((*array));
		array++;
		i++;
	}
}
