#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - deallocates memory allocated to dog variable
 *
 * @d: dog struct
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
