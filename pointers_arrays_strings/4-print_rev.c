#include "main.h"
/**
 * print_rev - affiche a l'envers
 * @s: chaine de caractere
 *
 */
void print_rev(char *s)
{
	char *inc = s;
	int len = 0;

	while (*inc != '\0')
	{
		inc++;
		len++;
	}
	while (len > 0)
	{
		len--;
		inc--;
		_putchar(*inc);
	}
	_putchar('\n');
}
