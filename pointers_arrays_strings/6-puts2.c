#include "main.h"
/**
 * puts2 - longueur d'une chaine
 * @s: chaine de caractere
 *
 */
void puts2(char *s)
{
	char *inc = s;
	int flag = 1;

	while (*inc != '\0')
	{
		if (flag == 1)
		{
			_putchar(*inc);
			flag = 0;
		}
		else
		{
			flag = 1;
		}
		inc++;
	}
	_putchar('\n');
}
