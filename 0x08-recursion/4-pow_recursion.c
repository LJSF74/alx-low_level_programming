#include "main.h"
/**
 * _pow_recursion - prints x to the pow of y
 * @x: num1
 * @y: num2
 * Return: x**y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
