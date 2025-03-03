#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - comparaison de chaine par rapport a des valeurs acceptees
 * @chaine : chaine a rechercher
 * @accept : charactere accepter
 *
 * Return: position du caractere
 */
char *_strpbrk(char *chaine, char *accept)
{
	unsigned int retour = 0;
	int trouve = 0;
	char *src2 = chaine;
	char *accept2 = accept;

	while (*src2 != '\0')
	{
		trouve = 0;
		accept2 = accept;
		while (trouve == 0 && *accept2 != '\0')
		{
			if (*accept2 == *src2)
				trouve = 1;
			accept2++;
		}
		if (trouve == 0)
			retour++;
		else
			return (src2);
		src2++;

	}
	return (NULL);
}

