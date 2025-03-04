#include "main.h"
#include <stddef.h>
/**
 * _strstr - comparaison de chaine par rapport a une autre chaine
 * @chaine : chaine a rechercher
 * @accept : chaine a trouver
 *
 * Return: position du caractere
 */
char *_strstr(char *chaine, char *accept)
{
	int trouve = 0;
	char *src2 = chaine;
	char *accept2 = accept;
	char *retour = NULL;
	char *src_cmp = NULL;

	while (*src2 != '\0')
	{
		trouve = 1;
		accept2 = accept;
		retour = src2;
		src_cmp = src2;
		while (trouve == 1 && *accept2 != '\0' && src_cmp != NULL && *src_cmp != '\0')
		{
			if ((src_cmp != NULL) && (accept2 != NULL) && (*accept2 != *src_cmp))
				trouve = 0;

			accept2++;
			src_cmp++;
		}
		if (trouve == 1)
			return (retour);
		src2++;

	}
	return (NULL);
}

