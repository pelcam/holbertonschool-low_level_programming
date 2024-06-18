#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int hexa;

	for (hexa = 0; hexa <= 15; hexa++)
	{
		printf("%x", hexa);
	}
	printf("\n");
	return (0);
}
