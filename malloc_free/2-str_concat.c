#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strln - longeur de chaine
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
	unsigned int i = 0;
	unsigned int longueur = 1;
	char *pointeurstr1 = str1;
	char *pointeurstr2 = str2;
	char *pointeurretour = NULL;

	longueur = _strlen(str1) + _strlen(str2) + 1;
	/* si la longueur est positive */
	if (longueur > 0)
	{
		char *retour = (char *)malloc(sizeof(char) * longueur);

	/* si la longueur est positive */
		pointeurretour = retour;
		if (retour != NULL)
		{
			i = 0;
			while (pointeurstr1 != NULL && *pointeurstr1 != '\0')
			{
				pointeurretour[i] = *pointeurstr1;
				i++;
				pointeurstr1++;
			}
			while (pointeurstr2 != NULL && *pointeurstr2 != '\0')
			{
				pointeurretour[i] = *pointeurstr2;
				i++;
				pointeurstr2++;
			}
			pointeurretour[i] = '\0';
			return (retour);
		}
	}
	return ((char *)(NULL));
}
