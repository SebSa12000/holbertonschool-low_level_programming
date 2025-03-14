#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initialisation
 * @d: structure dog
 * @name: nom
 * @age: age
 * @owner: proprietaire
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
