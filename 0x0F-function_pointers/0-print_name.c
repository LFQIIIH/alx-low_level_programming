#include "function_pointers.h"

/**
 * print_name - prints the name using the function pointed by second argument.
 *
 * @name: name of person.
 * @f: Pointer to used function
 *
 * Return: No return.
 */
void	print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

