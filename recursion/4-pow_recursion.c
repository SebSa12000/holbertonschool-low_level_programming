#include "main.h"
/**
 * _pow_recursion - puissance y
 * @x : int x
 * @y : int y puissance
 *
 * Return: resultat
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
