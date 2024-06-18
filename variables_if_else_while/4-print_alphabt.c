#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'q' || alphabet == 'e')
			alphabet++;
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
