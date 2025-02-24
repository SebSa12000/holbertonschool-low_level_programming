#include "main.h"
/**
 * print_most_numbers - affiche des nombres de 0 a 9 sans 2 et 4
 *
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		if (i != 2 && i != 4)
			_putchar('0' + i);
	_putchar('\n');
}
