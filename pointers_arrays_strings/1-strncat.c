#include "main.h"
/**
 * _strncat - conctene deux chaines
 * @dest : destination
 * @src : sources
 * @n: nombre de caractere
 *
 * Return: pointeur sur char*
 */
char *_strncat(char *dest, char *src, int n)
{
	char *retour = dest;
	char *cpt = dest;
	char *src2 = src;
	int i = 0;

	while (*cpt != '\0')
		cpt++;
	while (*src2 != '\0' && i < n)
	{
		*cpt = *src2;
		src2++;
		cpt++;
		i++;
	}
	*cpt = '\0';
	return (retour);
}

