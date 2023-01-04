#include "main.h"
/**
 * check - checks for the sq rt
 * _sqrt_recursion - returns the natural square root of a number.
 * @x: an integer
 * @y: an integer
 * Return: interger
 */
int check(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (check(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: interger to operate  on
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
