#include "dog.h"
/**
 * new_dog - New dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Pointeur
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr != NULL)
	{
		ptr->name = strdup(name);
		ptr->age = age;
		ptr->owner = strdup(owner);
		return (ptr);
	}
	return (NULL);
}
