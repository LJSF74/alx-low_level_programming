#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range -  creates array from min to max
 * @min: first elem
 * @max: last elem
 * Return: arr
 */
int *array_range(int min, int max)
{
	int size, i, e = min;
	int *arr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	e = min;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		printf("Can't allocate memory");
		free(arr);
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		arr[i] = e;
		e++;
	}
	return (arr);
}
