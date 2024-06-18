#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int num;
	int let;

	for (num = 0, num < 10, num++)
		putchart(num);
	for (let = 'a', let < 'f', let++)
		putchart(let);
	return (0);
}
