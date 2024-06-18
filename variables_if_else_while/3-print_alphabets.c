#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
        {
                putchar(alphabet);
                alphabet++;
        }
	putchar('\n');
	return (0);
}
