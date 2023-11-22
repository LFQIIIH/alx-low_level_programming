#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - counts lenght of string.
* @str : string to count lenght
*
* Return: Returns the lenght of string.
*/

unsigned int	_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str != NULL && str[i] != '\0')
		i++;
	return (i);
}

/**
* _strdup - create allocated copie of string
* @str : copied string.
*
* Return: Returns a pointer to copied array, or NULL if it fails
*/

char	*_strdup(char *str)
{
	unsigned int	i;
	unsigned int	lenght;
	char			*new_str;

	if (str == NULL)
		return (NULL);
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
