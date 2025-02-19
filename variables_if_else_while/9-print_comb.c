#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Affiche les chiffres de 0 a 9 avec virgule et espace
 *
 * Return: Always (Success)
 */
int main(void)
{
	int caractere = '0';

	do {
		/* affichage du caracte¨re */
		putchar(caractere);
		if (caractere != '9')
		{
			putchar(',');
			putchar(' ');
		}
		/* increment */
		caractere++;

	} while (caractere <= '9');
	putchar('\n');
	return (0);
}
