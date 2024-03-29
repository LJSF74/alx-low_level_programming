#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates mem for an array
 * @nmemb: elems of arr
 * @size: arr len
 * Return: arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = calloc(nmemb, size);
	if (arr == NULL)
	{
		printf("Can't allocate memory");
		free(arr);
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
