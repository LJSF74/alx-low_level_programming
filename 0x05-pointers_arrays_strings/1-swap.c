#include "main.h"
/**
 * swap_int - swaps value of two int
 * @a: first in
 * @b: second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *s = &a;

	*a = *b;
	*b = *s;
}
