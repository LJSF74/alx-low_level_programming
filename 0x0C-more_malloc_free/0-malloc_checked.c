#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates mem using malloc
 * @b: mem size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(sizeof(b));
	if (m == NULL)
	{
		printf("Can't allocate memory");
		exit(98);
	}
	return (m);
}
