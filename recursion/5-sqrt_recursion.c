#include "main.h"

/**
 * _sqrt_helper - helper function to find the natural root
 * @n: number to find its natural root
 * @i: candidat for the actual root
 * Return: natural square root of n
 */

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number we want the natural root from
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}