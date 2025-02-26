#include "main.h"
/**
 * _puts - longueur d'une chaine
 * @s: chaine de caractere
 *
 * Return: longueur de chaine
 */
void _puts(char *s)
{
	char *inc = s;

	while (*inc != '\0')
	{
		_putchar(*inc);
		inc++;
	}
	_putchar('\n');
}
