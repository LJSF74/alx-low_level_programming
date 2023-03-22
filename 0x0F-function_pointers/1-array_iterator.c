#include "function_pointers.h"
/**
 * array_iterator - prints array elements using pointer function
 * @array: array to print
 * @size: array size
 * @action: pointer function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
	{
		if (action)
		{
			for (i = 0 ; i < size ; i++)
			{
				(*action)(array[i]);
			}
		}
	}
}
