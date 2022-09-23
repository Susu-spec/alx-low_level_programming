#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses array of n elements
 * @a: array parameter
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	char tmp;
	int i, c;

	c = n - 1;
	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[c];
		a[c] = tmp;
		c--;
	}
}
