#include "main.h"
/**
 * _strlen - longueur d'une chaine
 * @s: chaine de caractere
 *
 * Return: longueur de chaine
 */
int _strlen(char *s)
{
	char *inc = s;
	int len = 0;

	while (*inc != '\0')
	{
		inc++;
		len = len + 1;
	}
	return (len);
}
