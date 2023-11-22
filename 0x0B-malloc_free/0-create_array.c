#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array -  creates an array and initializes it with a specific char.
* @size : size of the array.
* @c : the character.
*
* Return: Returns a pointer to the array, or NULL if it fails
*/

char	*create_array(unsigned int size, char c)
{
	char	*buffer;
	unsigned int	i;

	buffer = (char *)malloc(sizeof(char) * size);
	if (buffer == NULL || !size)
		return (NULL);
	i = 0;
	while (i < size)
	{
		buffer[i] = c;
		i++;
	}
	return (buffer);
}
