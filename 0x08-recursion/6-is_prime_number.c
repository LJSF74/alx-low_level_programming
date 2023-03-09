#include "main.h"
/**
 * is_prime - checks if b is prime
 * @x: incremened int
 * @y: int to check
 * Return: 0 or 1
 */
int is_prime(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
	{
		return (is_prime(x + 1, y));
	}
}
/**
 * is_prime_number - checks if n is prime
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (is_prime(2, n));
	}
}
