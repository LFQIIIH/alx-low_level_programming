#include <stdio.h>
#include "main.h"

/**
 * print_name - prints the name using the function pointed by second argument. 
 * 
 * @name: name of person. 
 * @f: Pointer to used function 
 */
void	print_name(char *name, void (*f)(char *))
{
	f(name);
}

