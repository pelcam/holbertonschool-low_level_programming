#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int num;
	char let;

	for (num = 0; num < 10; num++)
		putchar(num);
	for (let = 'a'; let <= 'f'; let++)
		putchar(let);
	return (0);
}
