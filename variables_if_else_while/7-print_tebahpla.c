#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Affiche les chiffres de z a a
 *
 * Return: Always (Success)
 */
int main(void)
{
	int caractere = 'z';

	do {
		/* affichage du caracte¨re */
		putchar(caractere);
		/* increment */
		caractere--;

	} while (caractere >= 'a');
	putchar('\n');
	return (0);
}
