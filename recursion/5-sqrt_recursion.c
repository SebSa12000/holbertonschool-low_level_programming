#include "main.h"
/**
 * _sqrt_recursion - racine carre
 * @n : valeur sqrt
 * 
 * Return: resultat
 */
int _sqrt_recursion(int n)
{
	int i = 0;
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
		while (i < n)
		{
			i++;
			if (i*i == n)
				return (i);
		}
		return (-1);
	}
}
