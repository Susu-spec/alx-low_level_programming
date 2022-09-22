#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses array of n elements
 * @a: array parameter
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int *p, i, k, temp;

	p = a;

	for (i = 0; i < n; i++)
	{
		p++;
	}
	for (k = 0; k < n / 2; k++)
	{
		temp = a[k];
		a[k] = *p;
		*p = temp;
		p--;
	}
}
