#include "main.h"
/**
 * puts_half - affiche la moitie
 * @s: chaine de caractere
 *
 */
void puts_half(char *s)
{
	char *inc = s;
	int len = 0, moitie = 0;

	while (*inc != '\0')
	{
		inc++;
		len++;
	}
	moitie = (len + 1) / 2;
	while (s[moitie] != '\0')
	{
		_putchar(s[moitie]);
		moitie++;
	}
	_putchar('\n');
}
