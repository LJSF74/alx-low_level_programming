#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to two dim arr
 * @width: arr width
 * @height: arr height
 * Return: arr
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int*));
	if (arr == NULL)
	{
		printf("Can't allocate memory");
		return (arr);
	}
	for (i = 0 ; i < height ; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			printf("Can't allocate memory");
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
