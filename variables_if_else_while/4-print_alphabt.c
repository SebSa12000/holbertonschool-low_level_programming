#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Affiche les caracteres de l'alphabet minuscule sans q et e
 *
 * Return: Always (Success)
 */
int main(void)
{
	char caractere = 'a';

	do {
		if (!((caractere == 'q') || (caractere == 'e')))
			putchar(caractere);
		caractere++;
	} while (caractere <= 'z');
	printf("\n");
	return (0);
}
