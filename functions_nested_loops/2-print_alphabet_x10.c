#include "main.h"

/**
 * print_alphabet_x10 - test d'affichage
 * permet de tester des valeurs aleatoire positive ou negative
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
