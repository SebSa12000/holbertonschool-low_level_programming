#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Affiche les caracteres de l'alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char caractere = 'a';

	do {
		putchar(caractere);
		caractere++;
	} while (caractere <= 'z');
	printf("\n");
	return (0);
}
