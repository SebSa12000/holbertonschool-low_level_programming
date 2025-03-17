#include <stddef.h>
/**
 * int_index - index in a array
 * @array: array to display
 * @size: size of array
 * @cmp: function to do
 *
 * Return: Position
 */
int int_index(int *array, size_t size, int (*cmp)(int))
{
	size_t i = 0;
	int retour = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		retour = cmp(array[i]);
		if (retour == 1)
			return (i);
	}
	return (-1);
}
