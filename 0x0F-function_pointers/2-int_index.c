#include "function_pointers.h"
/**
 * int_index - searches for int in an array
 * @array: array
 * @size: array size
 * @cmp: function pointer
 * Return: i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array)
	{
		if (cmp)
		{
			for (i = 0 ; i < size ; i++)
			{
				if ((*cmp)(array[i]) == 1)
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
