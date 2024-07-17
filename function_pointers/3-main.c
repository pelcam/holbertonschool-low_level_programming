#include "3-calc.h"

/**
 * main - main function of task 3
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: the result of the asked operation, 98 if tere is too many arguments,
 * and 99 if the operator is not correct
 */

int main(int argc, char *argv[])
{
	int a, b , result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[2]);
	b = atoi(argv[4]);

	operation = get_op_func(argv[3]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(a, b);
	printf("%d\n", result);

	return (0);
}
