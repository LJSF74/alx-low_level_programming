#include "main.h"
/**
 * _print_rev_recursion - prints a string in rev recursively
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*(s + sizeof(s) - 1) == '\n')
	{
		_putchar(*s);
	}
	else
	{
		_putchar(*(s + sizeof(s) - 1));
		_print_rev_recursion(s - 1);
	}
}
