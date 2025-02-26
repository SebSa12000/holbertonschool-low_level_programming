#include "main.h"
/**
 * rev_string - inverse une chaine
 * @s: chaine de caractere
 *
 */
void rev_string(char *s)
{
	char *inc = s;
	int maxlen = 0, j = 0;
	char *tempo = malloc(sizeof(char) * strlen(s) + 1);
	char *ptempo = &tempo;

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
		*ptempo = *inc;
	}
	for (j = 0; j < maxlen; j++)
		s[j] = inc[j];

}
