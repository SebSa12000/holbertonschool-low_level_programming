#include "main.h"
/**
 * reverse_array - inverse un tableau
 * @a : tableau a inverser
 * @n : longueur du tableau
 *
 */
void reverse_array(int *a, int n)
{
	int tempo[100];
	int i = n, j = 0;

	while (i > 0)
	{
		i--;
		tempo[j] = a[i];
		j++;
	}
	j = 0;
	while (j < n)
	{
		a[j] = tempo[j];
		j++;
	}

}

