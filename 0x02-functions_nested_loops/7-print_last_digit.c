#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - prints last digit of an int
 * @n: integer
 * Return: 0
 */
int print_last_digit(int n)
{
	int last = abs(n) % 10;
	
	_putchar(last + '0');
	return (last);
}
