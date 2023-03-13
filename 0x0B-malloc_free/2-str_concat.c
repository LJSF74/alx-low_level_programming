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
		news = malloc(sizeof(char));
		news[0] = '\0';
		return (news);
	}
	l1 = s1 == NULL ? 0 : strlen(s1);
	l2 = s2 == NULL ? 0 : strlen(s2);
	news = malloc(l1 + l2 + 1);
	if (news == NULL)
	{
		printf("Can't allocate memory");
		return (news);
	}
	if (s1 != NULL)
	{
		for ( ; i < l1 ; i++)
		{
			news[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (j = 0 ; j < l2 ; j++)
		{
			news[i + j] = s2[j];
		}
	}
	return (news);
}
