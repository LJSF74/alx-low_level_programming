#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - duplicates str
 * @str: string
 * Return: dup
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(strlen(str));
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
