#include "main.h"

int x_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the dquare root of
 * Return: the resulting square root of
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (x_sqrt_recursion(n, 0));
}

/**
 * x_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iteration
 * Return: the result
 */

int x_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (x_sqrt_recursion(n, i + 1));
}
