#include "main.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int	_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str != NULL && str[i] != '\0')
		i++;
	return (i);
}

char	*_strdup(char *str)
{
	unsigned int	i;
	unsigned int	lenght;
	char			*new_str;

	lenght = _strlen(str);
	new_str = (char *)malloc(sizeof(char) * lenght);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
