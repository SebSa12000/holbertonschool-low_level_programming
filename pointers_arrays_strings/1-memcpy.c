#include "main.h"
/**
 * _memcpy - copie de char
 * @dest : tableau a modifier
 * @src : tableau a copier
 * @n : nombre de valeur a modifier
 *
 * Return: emplacement du tableau
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *retour = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (retour);
}
