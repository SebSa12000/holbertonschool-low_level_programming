#include "main.h"
#include <stdlib.h>
/**
 * array_range - cree un tableau entre min et max
 * @min : longueur
 * @max : size
 *
 * Return: pointeur sur tableau
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *retour;
	int *pretour;
	int length = 0;

	if (min < 0 || max < 0 || min > max)
		return (NULL);

	length = max - min + 1;
	retour = malloc(sizeof(int) * (length));
	if (retour != NULL)
	{
		pretour = retour;
		for (i = 0; i < (length); i++)
		{
			*pretour = i + min;
			pretour++;
		}
		return (retour);
	}
	return (NULL);
}
