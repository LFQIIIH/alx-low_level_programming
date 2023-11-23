#include "main.h"

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
		if (!(argv[i][0] >= 48 && argv[i][0] <= 57))
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
