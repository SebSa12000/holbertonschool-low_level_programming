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
	char *ptrchar, *ptrchar2, *ptr2 = name;

	if (ptr != NULL)
	{
		if (name != NULL)
		{
			(*ptr).name = malloc(sizeof(name) + 1);
			if (ptr->name != NULL)
			{
				ptrchar = (*ptr).name;
				while (*ptr2 != '\0')
				{
					*ptrchar = *ptr2;
					ptr2++;
					ptrchar++;
				}
				*ptrchar = '\0';
			}
			else
			{
				free(ptr);
				return (NULL);
			}
		}
		ptr->age = age;
		if (owner != NULL)
		{
			ptr->owner = malloc(sizeof(owner) + 1);
			if (ptr->owner != NULL)
			{
				ptrchar2 = ptr->owner;
				while (*owner != '\0')
					*ptrchar2++ = *owner++;
				*ptrchar2 = '\0';
			}
			else
			{
				free(ptr->name);
				free(ptr);
				return (NULL);
			}
		}
		return (ptr);
	}
	return (NULL);
}
