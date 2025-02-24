#include "main.h"
/**
 * more_numbers - affiche des nombres de 0 a 14
 *
 */
void more_numbers(void)
{
	int i = 0;
	int line = 0;

	for (line = 0; line < 10; line++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
