#include "3-calc.h"

/**
 * main - execute the suitable operation
 *
 * @ac: Number of arguments
 * @av: Arguments to main
 * Return: 0 if succeful or 98, 99, 100
 */
int	main(int ac, char **av)
{
	op_t	operate;
	int		a;
	int		b;

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (av[2][1])
	{
		printf("Error\n");
		return (99);
	}
	operate.op = av[2];
	a = atoi(av[1]);
	b = atoi(av[3]);
	operate.f = get_op_func(operate.op);

	if (operate.f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((operate.op[0] == '/' || operate.op[0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", operate.f(a, b));
	return (0);
}
