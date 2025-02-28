#include "main.h"
#include <stdio.h>
/**
 * print_array - affiche des entiers
 * @a: liste d'entier
 * @n: nombre d'entier
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < (n - 1))
				printf(", ");
		}

	printf("\n");
}
