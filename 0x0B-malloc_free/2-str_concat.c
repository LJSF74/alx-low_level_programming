#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: news
 */
char *str_concat(char *s1, char *s2)
{
	char *news;
	size_t i, j, l1, l2;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (s1 == NULL)
	{
		l1 = 0;
	}
	if (s2 == NULL)
	{
		l2 = 0;
	}
	news = malloc(strlen(s1) + strlen(s2) + 1);
	if (news == NULL)
	{
		printf("Can't allocate memory");
		return (news);
	}
	for (i = 0 ; i < l1 ; i++)
	{
		news[i] = s1[i];
	}
	for (j = 0 ; j < l2 ; j++)
	{
		news[i + j] = s2[j];
	}
	return (news);
}
