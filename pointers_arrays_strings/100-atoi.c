#include "main.h"
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
	int fini = 0;

	while ((s[i] != '\0') && (fini == 0))
	{
		if (s[i] == 32)
		{
			if ((fini == 0) && (!retour))
				fini = 1;
		}
		else if ((s[i] > 47 ) && (s[i] < 58))
		{
			retour = retour * 10 + (s[i] - 48);
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
		i++;
	}
	return (retour);
}
