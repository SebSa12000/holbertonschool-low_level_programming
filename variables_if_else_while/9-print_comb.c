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
	int c = 48;

	do {
		/* affichage du c */
		putchar(c);
		if (c != 57)
		{
			putchar(44);
			putchar(32);
		}
		/* increment */
		c++;

	} while (c <= 57);
	putchar(10);
	return (0);
}
