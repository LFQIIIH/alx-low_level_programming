#include "main.h"

/**
* main - prints the name of the program
*
* Return : Always 0.
*/

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
