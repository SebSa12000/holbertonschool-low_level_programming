#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - affiche un echiquier
 * @tableau: tableau de piece
 * @size: taille
 *
 */
void print_diagsums(int *tableau, int size)
{
	int i = 0;
	int sum1 = 0, sum2 = 0;
	int *tab, *tab2;

	for (i = 0; i < size; i++)
	{
		tab = tableau + size * i;
		sum1 = sum1 + tab[i];
		tab2 = tableau + size * i;
		sum2 = sum2 + tab2[size - i - 1];

	}
	printf("%d, %d\n", sum1, sum2);

}
