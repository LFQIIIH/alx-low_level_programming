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

char	*str_concat(char *s1, char *s2)
{
	unsigned int	lenght;
	unsigned int	i;
	char			*new_str;

	lenght = _strlen(s1) + _strlen(s2) + 1;
	new_str = (char *)malloc(sizeof(char) * lenght);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		if (s1 && s1[i])
			new_str[i] = s1[i];
		else if (s2 && s2[i])
			new_str[i] = s2[i];
		i++;
	}
	return (new_str);
}
