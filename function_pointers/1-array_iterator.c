#include <stddef.h>
/**
 * array_iterator - Array iterator
 * @array: array to display
 * @size: size of array
 * @action: function to do
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
