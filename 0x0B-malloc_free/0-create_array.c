#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char	*create_array(unsigned int size, char c)
{
	char	*buffer;
	unsigned int	i;

	
	buffer = (char *)malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		buffer[i] = c;
		i++;
	}

	return (buffer);
}
