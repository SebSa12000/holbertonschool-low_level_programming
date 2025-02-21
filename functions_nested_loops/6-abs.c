#include "main.h"

/**
 * abs - renvoi la valeur absolu
 * @c: valeur
 *
 * Return: valeur absolue
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c == 0)
	{
		return (0);
	}
	else
	{
		return ((int)(-1 * c));
	}
}
