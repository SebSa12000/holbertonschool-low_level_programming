#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Affiche les caracteres de l'alphabet majuscule et minuscule
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
	caractere = 'A';
	do {
		putchar(caractere);
		caractere++;
	} while (caractere <= 'Z');
	printf("\n");
	return (0);
}
