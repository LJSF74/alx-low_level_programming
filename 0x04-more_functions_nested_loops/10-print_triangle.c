#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: triangle size
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = size ; i >= 0 ; i++)
		{
			for (j = 0 ; j < i ; j++)
			{
				_putchar(' ');
			}
			for (k = 0 ; k < size - i ; k++)
			{
				_putchar('#');
			}
			if (i != 0)
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
