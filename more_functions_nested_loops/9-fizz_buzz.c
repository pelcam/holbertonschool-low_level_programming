#include "main.h"
#include <stdio.h>

/**
 */

int main(void)
{
	int n, m3, m5;

	for (n = 0; n <= 100; n++)
	{
		m3 = n % 3;
		m5 = n % 5;
		if (m3 == 0)
		{
			printf("Fizz");
		}
		else if (m5 == 0)
		{
			printf("Buzz");
		}
		else if (m3 == 0 && m5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", n);
		}
		putchar(' ');
	}
	return (0);
}
