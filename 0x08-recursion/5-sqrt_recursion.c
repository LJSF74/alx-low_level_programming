#include "main.h"
/**
 * is_sqrt - checks if x is the sqrt of y
 * @x: int
 * @y: int
 * Return: sqrt
 */
int is_sqrt(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (is_sqrt(x + 1, y));
	}
}

/**
 * _sqrt_recursion - calculates square root
 * @n: int
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (is_sqrt(1, n));
	}
}
