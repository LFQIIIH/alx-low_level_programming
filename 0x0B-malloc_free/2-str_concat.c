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
* str_concat - concat two strings in on string.
* @s1 : firts string
* @s2 : second string
*
* Return: Returns pointer to new string or NULL if fail.
*/

char	*str_concat(char *s1, char *s2)
{
	unsigned int	lenght;
	unsigned int	i;
	unsigned int    j;
	char			*new_str;

	lenght = _strlen(s1) + _strlen(s2) + 1;
	new_str = (char *)malloc(sizeof(char) * lenght);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
		while (s2 && s2[j])
		{
			new_str[i] = s2[j];
			j++;
			i++;
		}
	new_str[i] = 0;
	return (new_str);
}
