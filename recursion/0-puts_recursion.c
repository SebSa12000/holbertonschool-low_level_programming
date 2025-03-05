#include "main.h"
/**
 *  _puts_recursion- chaine recursive
 * @s : chaine a afficher
 *
 */
void _puts_recursion(char *s)
{
	char *suivant = s;

	if (*s != '\0')
	{
		_putchar(s[0]);
		suivant++;
		_puts_recursion(suivant);
	}
	else
	{
		_putchar('\n');
	}
}
