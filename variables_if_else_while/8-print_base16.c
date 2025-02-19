#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Affiche les chiffres de hexa
 *
 * Return: Always (Success)
 */
int main(void)
{
	int caractere = '0';

	do {
		/* affichage du caracte¨re */
		putchar(caractere);
		/* increment */
		caractere++;

	} while (caractere <= '9');
	caractere = 'a';

	do {
		/* affichage du caractere */
		putchar(caractere);
		/* increment */
		caractere++;

	} while (caractere <= 'f');
	putchar('\n');
	return (0);
}
