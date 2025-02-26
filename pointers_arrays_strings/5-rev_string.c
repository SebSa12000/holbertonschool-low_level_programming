#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * rev_string - inverse une chaine
 * @s: chaine de caractere
 *
 */
void rev_string(char *s)
{
	char *inc = s;
	int maxlen = 0, cpt = 0, len = 0, j = 0;
	char tempo[10] = "My school"; 
	char *ptempo = tempo;

	while (*inc != '\0')
	{
		inc++;
		len++;
	}
	maxlen = len;
	while (len > 0)
	{
		
		len--;
		inc--;
		ptempo[cpt] = *inc;
		cpt++;
	}

	for (j = 0; j < maxlen; j++)
		s[j] = ptempo[j];


}
