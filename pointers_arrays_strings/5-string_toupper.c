#include "main.h"
/**
 * string_toupper - met en majuscule
 * @chaine : chaine a upper
 *
 * Return: pointeur sur char*
 */
char *string_toupper(char *chaine)
{
	char *retour = chaine;
	char *chaine2 = chaine;

	while (*chaine2 != '\0')
	{
		if (*chaine2 >= 'a' && *chaine2 <= 'z')
			*chaine2 = *chaine2 - 32;
		chaine2++;
	}
	return (retour);
}

