#include "3-calc.h"

/**
 * get_op_func - get the equivalant operation
 *
 * @s: operation character
 * Return: int(*)(int, int)
 */
int (*get_op_func(char *s))(int, int)
{
	int	(*op[5])(int, int);
	int		i;
	char	arr[5] = {'+', '-', '%', '/', '*'};

	op[0] = &op_add;
	op[1] = &op_sub;
	op[2] = &op_mod;
	op[3] = &op_div;
	op[4] = &op_mul;

	i = 0;
	while (i < 5)
	{
		if (*s == arr[i])
			return (op[i]);
		i++;
	}
	return (NULL);
}
