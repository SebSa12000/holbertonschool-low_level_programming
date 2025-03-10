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
int _strlen(char *str)
{
	int retour = 0;
	char *str2 = str;

	if (str2 != NULL && *str2 != '\0')
	{
		retour++;
		str2++;
	}
	return (retour);
}

/**
 * str_concat - concat de chaine
 * @str1 : chaine1
 * @str2 : chaine2
 *
 * Return: pointeur sur chaine
 */
char *str_concat(char *str1, char *str2)
{
	unsigned int i = 0, j = 0;
	unsigned int longueur1 = 0, longueur2 = 0;
	char *pointeurstr1 = str1;
	char *pointeurstr2 = str2;
	char *pointeurretour = NULL;

	if (str1 != NULL)
		str1 = "";

	if (str2 != NULL)
		str2 = "";

	longueur1 = _strlen(str1);
	longueur2 = _strlen(str2);

	/* si la longueur est positive */
	char *retour = (char *)malloc(sizeof(char) * (longueur1 + longueur2 + 1));

	/* si la longueur est positive */
	pointeurretour = retour;
	if (retour != NULL)
	{
		i = 0;
		for (i = 0; i < longueur1; i++)
		{
			pointeurretour[i] = str1[i];
		}
		for (j = 0; j < longueur2; j++)
		{
			pointeurretour[i + j] = str2[i];
		}
		pointeurretour[i + j] = '\0';
		return (retour);
	}
	return ((char *)(NULL));
}
