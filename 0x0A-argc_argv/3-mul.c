#include "main.h"

/**
* main - check the code for ALX School students.
*
* Return: Always 0.
*/

int main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
