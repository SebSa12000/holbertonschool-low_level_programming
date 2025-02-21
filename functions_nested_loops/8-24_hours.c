#include "main.h"

/**
 * jack_bauer - chrono
 *
 */
void jack_bauer(void)
{
	int last = 0;
	int last2 = 0;

	for (int i = 0; i < 24; i++)
		for (int j = 0; j < 60; j++)
		{
			if (i < 10)
				_putchar('0');
			else if (i < 20)
				_putchar('1');
			else
				_putchar('2');
			last = i % 10;
			putchar('0' + last);
			_putchar(':');
			if (j < 10)
				_putchar('0');
			else if (j < 20)
				_putchar('1');
			else if (j < 30)
				_putchar('2');
			else if (j < 40)
				_putchar('3');
			else if (j < 50)
				_putchar('4');
			else
				_putchar('5');
			last2 = j % 10;
			_putchar('0' + last2);
		}
	if (valeur < 0 || valeur > 9)
	{
		_putchar('E');
	}
	_putchar(valeur + '0');
}
