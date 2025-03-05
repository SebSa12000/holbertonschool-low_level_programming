#include "main.h"
/**
 * _print_rev_recursion - chaine recursive
 * @s : chaine a afficher
 *
 */
void _print_rev_recursion(char *s)
{
	char *suivant = s;

	if (*s != '\0')
	{
		suivant++;
		_print_rev_recursion(suivant);
		_putchar(s[0]);
	}
}
