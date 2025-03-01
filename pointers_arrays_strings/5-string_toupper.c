#include "main.h"
/**
 * string_toupper - conctene deux chaines
 * @dest : destination
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

