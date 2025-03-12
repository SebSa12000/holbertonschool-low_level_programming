#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strlen - longeur de chaine
 * @str : chaine1
 *
 * Return: longueur
 */
unsigned int _strlen(char *str)
{
	int retour = 0;
	char *str2 = str;

	while (*str2 != '\0')
	{
		retour++;
		str2++;
	}
	return (retour);
}

/**
 * string_nconcat - concat de chaine
 * @str1 : chaine1
 * @str2 : chaine2
 * @n : longueur a traiter
 *
 * Return: pointeur sur chaine
 */
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int longueur1 = 0;
	unsigned int longueur2 = 0;
	unsigned int longueurtot = 0;
	char *pointeurretour = NULL;
	char *retour = NULL;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	longueur1 = _strlen(str1);
	if (n >= _strlen(str2))
		longueur2 = _strlen(str2);
	else
		longueur2 = n;
	longueurtot = longueur1 + longueur2 + 1;
	/* si la longueur est positive */
	retour = (char *)malloc(sizeof(char) * (longueurtot));

	/* si la longueur est positive */
	pointeurretour = retour;
	if (retour != NULL)
	{
		i = 0;
		for (i = 0; i < longueur1; i++)
		{
			retour[i] = str1[i];
		}
		for (j = 0; j < longueur2; j++)
		{
			retour[i + j] = str2[j];
		}
		pointeurretour[i + j] = '\0';
		return (retour);
	}
	return (NULL);
}
