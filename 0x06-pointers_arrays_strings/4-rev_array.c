#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses array of n elements
 * @a: array parameter
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int temp[n], i;

	for (i = 0; i < n; i++)
	{
		temp[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}
