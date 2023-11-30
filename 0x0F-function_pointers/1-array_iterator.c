#include "function_pointers.h"

/**
 * array_iterator - loop in array and excute function to elem.
 *
 * @array: the array
 * @size: size of the array
 * @action: pointer to function
 *
 * Return : Nothing.
 */
void	array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	i = 0;
	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
