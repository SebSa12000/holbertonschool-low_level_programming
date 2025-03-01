#include "main.h"
/**
 * _strcat - conctene deux chaines
 * @dest : destination
 * @src : sources
 *
 * Return: pointeur sur char*
 */
char *_strcat(char *dest, char *src)
{
	char *retour = dest;
	char *cpt = dest;
	char *src2 = src;

	while (*cpt != '\0')
		cpt++;
	while (*src2 != '\0')
	{
		*cpt = *src2;
		src2++;
		cpt++;
	}
	*cpt = '\0';
	return (retour);
}

