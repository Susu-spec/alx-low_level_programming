#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - returns first element index which @cmp does not retur 0
 * @array: pointer to first element of array
 * @size: size of array
 * @cmp: pointer to function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, pos;

	pos = -1, i = 0;
	if (size <= 0)
		return (pos);
	if (cmp == NULL)
		return (0);
	if(array == NULL)
		return (0);
	while (i < size)
	{
		if (cmp((array[i])) != 0)
		{
			pos = i;
			break;
		}
		else
			i++;
	}
	return (pos);
}
