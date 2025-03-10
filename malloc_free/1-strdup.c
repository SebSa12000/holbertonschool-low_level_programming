#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplique une chaine
 * @str : duplication de chaine
 *
 * Return: pointeur sur chaine
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int longueur = 1;
	char *pointeurstr = str;
	char *pointeurretour = NULL;

	if (pointeurstr != NULL)
	{
		/* Calcule la longueur de la chaine */
		while (*pointeurstr != '\0')
		{
			pointeurstr++;
			longueur++;
		}
	}
	else
		longueur = 0;
	/* si la longueur est positive */
	if (longueur > 0)
	{
		/* alloue la memoire */
		char *retour = (char *)malloc(sizeof(char) * longueur);

		pointeurretour = retour;
		/* si ça n'a pas planté*/
		if (retour != NULL)
		{
			pointeurstr = str;
			/* et que la longueur est positive */
			if (longueur > 0)
			{
				/* copie d'une chaine sur l'autre */
				for (i = 0; i < longueur; i++)
					pointeurretour[i] = pointeurstr[i];
				/* \0' */
				pointeurretour[i] = '\0';

				return ((char *)(retour));
			}
			else
				return ((char *)(NULL));
		}
	}
	return ((char *)(NULL));
}
