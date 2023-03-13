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

	i = 0;
	if (s1 == NULL && s2 == NULL)
	{
		news = '\0';
		return (news);
	}
	news = malloc(strlen(s1) + strlen(s2) + 1);
	if (news == NULL)
	{
		printf("Can't allocate memory");
		return (news);
	}
	if (s1 != NULL)
	{
		l1 = strlen(s1);
		for ( ; i < l1 ; i++)
		{
			news[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		l2 = strlen(s2);
		for (j = 0 ; j < l2 ; j++)
		{
			news[i + j] = s2[j];
		}
	}
	return (news);
}
