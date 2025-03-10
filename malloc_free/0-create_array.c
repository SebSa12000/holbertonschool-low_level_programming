#include "main.h"
#include <stdlib.h>
/**
 * create_array - cree un tableau
 * @size : longueur
 * @c : caractere
 *
 * Return : pointeur sur tableau
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *retour = (char *)malloc(sizeof(char) * size);

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			retour[i] = c;
		return (retour);
	}
	else
		return (NULL);
}
