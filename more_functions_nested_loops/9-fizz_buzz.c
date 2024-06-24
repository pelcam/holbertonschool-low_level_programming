#include "main.h"
#include <stdio.h>

/**
 * main - very specific output
 * Return: 0
 */

int main(void)
{
	int n, m3, m5;

	for (n = 1; n <= 100; n++)
	{
		m3 = n % 3;
		m5 = n % 5;

		if (m3 == 0 && m5 == 0)
			printf("FizzBuzz");
		else if (m3 == 0)
			printf("Fizz");
		else if (m5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		{
			if (n != 100)
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
