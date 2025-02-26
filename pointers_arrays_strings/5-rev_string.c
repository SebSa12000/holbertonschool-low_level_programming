#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * rev_string - inverse une chaine
 * @s: chaine de caractere
 *
 */
void rev_string(char *s)
{
	char *inc = s;
	int maxlen = 0, cpt = 0, len = 0, j = 0;
	char *tempo = NULL;
	char *ptempo = NULL;
	while (*inc != '\0')
	{
		inc++;
		len++;
	}
	maxlen = len;
	tempo = malloc(sizeof(char) * (maxlen + 1));
	if (tempo != NULL)
	{
		ptempo = tempo;
		while (len > 0)
		{
			len--;
			inc--;
			ptempo[cpt] = *inc;
			cpt++;
		}
		for (j = 0; j < maxlen; j++)
			s[j] = ptempo[j];
		free(tempo);
	}
}
