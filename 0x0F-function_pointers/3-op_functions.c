#include "3-calc.h"

/**
 * op_add - adds two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two number.
 * @a: first number.
 * @b: second number.
 *
 * Return: multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: division.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the module of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
