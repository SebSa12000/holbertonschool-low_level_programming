#include "main.h"
/**
 * swap_int - swap des entiers
 * @a: valeur a
 * @b: valeur b
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
