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
		if (name != NULL)
		{
			ptr->name = strcpy(name);
		}

		ptr->age = age;
		if (owner != NULL)
		{
			ptr->owner = strcpy(owner);
		}
		return (ptr);
	}
	return (NULL);
}
