#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates mem using malloc
 * @b: mem size
 * Return: mem
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		printf("Can't allocate memory");
		free(m);
		exit(98);
	}
	return (m);
}
