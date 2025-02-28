#include "main.h"
#include <stdio.h>
/**
 * _atoi - converti en entier
 * @s: chaine de caractere
 *
 * Return: entier converti
 */
int _atoi(char *s)
{
	int retour = 0;
	int i = 0;
	int flagneg = 0;
	int traitement = 1;

	while ((s[i] != '\0') && (traitement == 1))
	{
		if ((s[i] > 47) && (s[i] < 58))
		{
			if (s[i] != '-')
			{
				if (retour < 0)
					retour = (retour * 10) - (s[i] - '0');
				else
					retour = (retour * 10) + (s[i] - '0');
			}
			if (flagneg == 1)
			{
				retour = -retour;
				flagneg = 0;
			}
		}
		else if (s[i] == '-')
		{
			if (flagneg == 0)
				flagneg = 1;
			else
				flagneg = 0;
		}
		if (i > 0 && traitement == 1 && retour > 0 && s[i] == ' ')
			traitement = 0;
		i++;
	}
	return (retour);
}
