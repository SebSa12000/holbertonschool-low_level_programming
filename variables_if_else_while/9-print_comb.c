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
	unsigned int caractere = 48;

	do {
		/* affichage du caracte¨re */
		putchar(caractere);
		if (caractere != 57)
		{
			putchar(44);
			putchar(32);
		}
		/* increment */
		caractere++;

	} while (caractere <= 57);
	putchar(10);
	return (0);
}
