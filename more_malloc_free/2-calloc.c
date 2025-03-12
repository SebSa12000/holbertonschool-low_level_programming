#include "main.h"
#include <stdlib.h>
/**
 * _calloc - cree un tableau
 * @nmemb : longueur
 * @size : size
 *
 * Return: pointeur sur tableau
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *pretour;
	void *retour;

	if (size <= 0 || nmemb <= 0)
		return (NULL);
	retour = malloc(size * nmemb);
	if (retour != NULL)
	{
		pretour = retour;
		for (i = 0; i < size; i++)
		{
			*pretour = 0;
			pretour++;
		}
		return (retour);
	}
	return (NULL);
}
