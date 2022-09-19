#include "main.h"
/**
 * swap_int - swaps two argument values
 * @a: first parameter value
 * @b: second parameter value
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
