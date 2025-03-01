#include "main.h"
/**
 * cap_string - met en majuscule la premiÃre lettre de chaque mot
 * @chaine : chaine a upper
 *
 * Return: pointeur sur char*
 */
char *cap_string(char *chaine)
{
	char *retour = chaine;
	char *chaine2 = chaine;
	int next_cap = 1;

	while (*chaine2 != '\0')
	{
		if (*chaine2 == ' ' || *chaine2 == '\n' || *chaine2 == '\t' || *chaine2 == '.')
		{
			next_cap = 1;
		}
		else if (next_cap == 1 && *chaine2 >= 'a' && *chaine2 <= 'z')
		{
			*chaine2 = *chaine2 - 32;
			next_cap = 0;
		}
		else
		{
			next_cap = 0;
		}
		chaine2++;
	}
	return (retour);
}

