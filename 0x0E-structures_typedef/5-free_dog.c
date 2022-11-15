#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees the dog
 * @d: input 1
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
