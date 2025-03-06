#include "main.h"
int _sqrt_recursion2(int i, int n);

/**
 * _prime_recursion2 - aide pour les nombre premiers
 * @i : compteur
 * @n : valeur premier
 *
 * Return: resultat
 */
int _prime_recursion2(int i, int n)
{
	if (i * i > n)
		return (1);
	else if (n == 1)
		return (0);
	else if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (_prime_recursion2(i + 1, n));

}

/**
 * is_prime_number - prime number
 * @n : valeur sqrtc
 *
 * Return: resultat
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime_recursion2(2, n));
	}
}
