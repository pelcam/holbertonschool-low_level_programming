#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: first number
 * @b: number to add
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: first number
 * @b: number to substract
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first number
 * @b: second number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: number to divide
 * @b: number to divide by
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
		printf("Error\n");
		exit(100);
	else
		return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: number to divide
 * @b: number to divide by
 *
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
		printf("Error\n");
		exit(100);
	else
		return (a % b);
}
