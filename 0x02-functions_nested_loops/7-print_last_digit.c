#include "main.h"
/**
 * print_last_digit - prints last digit of an int
 * @n: integer
 * Return: 0
 */
int print_last_digit(int n)
{
	int last = n % 10;

	_putchar(last);
	return (0);
}
