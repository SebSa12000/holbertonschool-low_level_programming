#include "main.h"
int _sqrt_recursion2(int i, int n);

/**
 * _sqrt_recursion2 - racine carre
 * @i : compteur
 * @n : valeur sqrt
 *
 * Return: resultat
 */
int _sqrt_recursion2(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i == n)
	{
		return (-1);
	}
	else
		return (_sqrt_recursion2(i + 1, n));

}

/**
 * _sqrt_recursion - racine carre
 * @n : valeur sqrt
 *
 * Return: resultat
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion2(1, n));
	}
}
