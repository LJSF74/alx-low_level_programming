#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates array or chars
 * @size: array size
 * @c: elems of array
 * Return: arr or NULL or 1
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size * sizeof(char));
		if (arr == NULL)
		{
			printf("Can't allocate %lu bytes\n", size * sizeof(char));
			return (NULL);
		}
		else
		{
			for (i = 0 ; i < size ; i++)
			{
				arr[i] = c;
			}
		}
		return (arr);
	}
	free(arr);
}
