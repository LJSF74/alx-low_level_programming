#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array or chars
 * @size: array size
 * @char: elems of array
 * Return: arr or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size * sizeof(char));
		return (arr);
	}
}
