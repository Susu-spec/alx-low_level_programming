#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to allocated memory
 * @b: amount of memory to be allocated
 * Return: pointer to newly allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
