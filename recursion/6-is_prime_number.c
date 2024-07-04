#include "main.h"

/**
 * is_prime_helper - auxiliary function of is_prime_number
 * @n: the number to check
 * @d: the actual divider
 * Return: 1 or 0,if the number is or not a prime number
 */

int is_prime_helper(int n, int d)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	if (n % d == 0)
	{
		return (0);
	}
	if (d * d > n)
	{
		return (1);
	}
	return (is_prime_helper(n, d + 1));
}

/**
 * is_prime_number - check if the input integer is a prime number
 * @n: number to check
 * Return: 1 or 0,if the number is or not a prime number
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
