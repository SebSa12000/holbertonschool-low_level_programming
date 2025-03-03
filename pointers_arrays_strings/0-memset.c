#include "main.h"
/**
 * _memset - affecte une valeur en memoire
 * @s : tableau a modifier
 * @b : caractere a mettre
 * @n : nombre de valeur a modifier
 *
 * Return: emplacement du tableau
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *retour = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (retour);
}
