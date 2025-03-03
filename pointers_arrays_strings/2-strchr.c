#include <stddef.h>
#include "main.h"
/**
 * _strchr - conctene deux chaines
 * @chaine : chaine a chercher
 * @caractere_a_chercher : caractere_a_chercher
 *
 * Return: pointeur sur char*
 */
char *_strchr(char *chaine, char caractere_a_chercher)
{
	char *vide = NULL;
	char *src2 = chaine;

	while (*src2 != '\0')
	{
		if (*src2 == caractere_a_chercher)
			return (src2);
		src2++;
	}
	if (*src2 == '\0')
		return (src2);
	else
		return (vide);
}

