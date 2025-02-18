#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Affiche les chiffres de 0 a 9 avec strictions
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
	putchar('\n');
	return (0);
}
