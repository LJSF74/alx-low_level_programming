#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates str
 * @str: string
 * Return: dup
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	dup = malloc(sizeof(str));
	if (dup == NULL)
	{
		printf("Can't allocate memory");
		return (dup);
	}
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
