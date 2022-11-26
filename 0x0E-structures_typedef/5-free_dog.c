#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - function to free dogs
 * @d: structure
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
	free(d->name);
	free(d->owner);
}
