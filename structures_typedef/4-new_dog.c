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
	char *ptrname = name, *ptrowner = owner;
	char *ptrname2;

	if (ptr != NULL)
	{
		if (name != NULL)
		{
			ptr->name = malloc(sizeof(name) + 1);
			if (ptr->name != NULL)
			{
				ptrname2 = name;
				while (*ptrname2 != '\0')
				{
					*ptrname = *ptrname2;
					ptrname++;
					ptrname2++;
				}
			}
		}
		ptr->age = age;
		if (owner != NULL)
		{
			ptr->owner = malloc(sizeof(owner) + 1);
			if (ptr->owner != NULL)
			{
				ptrname = ptr->owner;
				ptrname2 = owner;
				while (*ptrname2 != '\0')
				{
					*ptrname = *ptrname2;
					ptrname++;
					ptrname2++;
				}
			}
		}
		return (ptr);
	}
	return (NULL);
}
