#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Affiche les chiffres de 0 a 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	char caractere = '0';

	do {
		/* affichage du caracte¨re */
		putchar(caractere);
		/* increment */
		caractere++;

	} while (caractere <= '9');
	printf("\n");
	return (0);
}
