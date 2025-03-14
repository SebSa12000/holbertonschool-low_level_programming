#include "dog.h"
/**
 * free_dog - libere la memoire
 * @d: structure a libere
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free((*d).name);
		if (d->owner)
			free((*d).owner);
		free(d);
	}
}
