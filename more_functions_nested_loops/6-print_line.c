#include "main.h"
/**
 * print_line - affiche une ligne de _
 *@n : nombre de _
 *
 */
void print_line(int n)
{
	int i = 0;

	if (i > 0)
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
