#include "dog.h"
/**
 * free_dog - libere la memoire
 * @d: structure a libere
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
