#include "main.h"

/**
* main - check the code for ALX School students.
*
* Return: Always 0.
*/

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
