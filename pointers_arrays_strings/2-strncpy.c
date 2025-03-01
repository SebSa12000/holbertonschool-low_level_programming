#include "main.h"
/**
 * _strncpy - conctene deux chaines
 * @dest : destination
 * @src : sources
 * @n: nombre de caractere
 *
 * Return: pointeur sur char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *retour = dest;
	char *dest2 = dest;
	char *src2 = src;
	int i = 0;
	int trouve_fin_src = 0;

	while (*src2 != '\0' && i < n )
	{
		*dest2 = *src2;

		src2++;
		dest2++;
		i++;
	}
	if (*src2 == '\0')
		trouve_fin_src = 1;
	while ( i < n )
	{
		if (trouve_fin_src == 0)
			*dest2 = *src2;
		else
			*dest2 = '\0';
		src2++;
		dest2++;
		i++;
	}
	return (retour);
}

