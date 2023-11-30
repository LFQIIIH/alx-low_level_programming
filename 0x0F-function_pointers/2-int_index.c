#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: the array
 * @size: the size of array
 * @cmp: function that compare
 *
 * Return: index of the integer or -1.
 */
int		int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	i = 0;
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
