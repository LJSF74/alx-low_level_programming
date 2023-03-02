#include "main.h"
/**
 * reverse_array - reverses n elements of arr
 * @a: array
 * @n: num of elem
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m = n / 2;
	int i = 0;
	int s;

	while (i < m)
	{
		s = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = s;
		i++;
	}
}
