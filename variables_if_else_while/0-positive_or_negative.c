#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - test de valeur aleatoire
 * permet de tester des valeurs aleatoire positive ou negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* test if positive */
	if (n > 0)
		printf("%d is positive\n", n);
	/* test if null */
	else if (n == 0)
		printf("%d is zero\n", n);
	/* test if negative */
	else
		printf("%d is negative\n", n);
	return (0);
}
