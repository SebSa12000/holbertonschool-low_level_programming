#include "main.h"
/**
 * leet - converti en leet
 * @chaine : chaine a leeter
 *
 * Return: pointeur sur char*
 */
char *leet(char *chaine)
{
	char *retour = chaine;
	char *chaine2 = chaine;

	while (*chaine2 != '\0')
	{
		if (*chaine2 == 'a' || *chaine2 == 'A')
		{
			*chaine2 = '4';
		}
		else if (*chaine2 == 'l' || *chaine2 == 'L')
		{
			*chaine2 = '1';
		}

		else if (*chaine2 == 'o' || *chaine2 == 'O')
		{
			*chaine2 = '0';
		}
		else if (*chaine2 == 't' || *chaine2 == 'T')
		{
			*chaine2 = '7';
		}
		else if (*chaine2 == 'e' || *chaine2 == 'E')
		{
			*chaine2 = '3';
		}
		chaine2++;
	}
	return (retour);
}

