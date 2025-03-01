#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * leet - converti en leet
 * @chaine : chaine a leeter
 *
 * Return: pointeur sur char*
 */
char *leet(char *chaine)
{
	int i = 0;
	char *retour = chaine;
	char *chaine2 = chaine;
	char *convert = "aAlLoOtTeE";
	char *convert2 = "4411007733";

	while (*chaine2 != '\0')
	{
		i = 0;
		for (convert[i] != '\0')
		{
			if (*chaine2 == convert[i])
				*chaine2 = convert2[i];
			i++;
		}
		chaine2++;
	}
	return (retour);
}

