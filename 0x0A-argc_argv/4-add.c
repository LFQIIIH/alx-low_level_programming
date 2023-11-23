#include "main.h"

/**
 * check - check the args validation. 
 * 
 * @arg: the argument to check. 
 *
 * Return: 0 if valid arg 1 if not.
 */

int check(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!(arg[i] >= 48 && arg[i] <= 57))
			return (1);
		i++;
	}
	return (0);
}

/**
* main - Prints the number of arguments passed into main
* @argc: Number of command line arguments
* @argv: Array name
* Return: Always 0
*/

int main(int argc, char **argv)
{
	int	res;
	int	i;
	int	n;

	i = 1;
	res = 0;
	while (i < argc)
	{
		if (check(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		n = atoi(argv[i]);
		res = res + n;
		i++;
	}
	printf("%d\n", res);
	return (0);
}
