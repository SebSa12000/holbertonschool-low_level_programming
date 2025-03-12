#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocation memoire 
 * @b : taille memoire
 *
 * Return: pointeur sur tableau
 */
void *malloc_checked(unsigned int b)
{
	void *retour = malloc(b);

	if (retour != NULL)
	{
		return (retour);
	}
	return (NULL);
}
