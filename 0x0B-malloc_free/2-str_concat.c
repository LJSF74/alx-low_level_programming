#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat: concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: news
 */
char *str_concat(char *s1, char *s2)
{
	char *news;
	int i, j;

	news = malloc(strlen(s1) + strlen (s2) + 2);
	if (news == NULL)
	{
		printf("Can't allocate memory");
		Return(news);
	}
	for (i = 0 ; i < strlen(s1) ; i++)
	{
		news[i] = s1[i];
	}
	for (j = 0 ; j < strlen(s2) ; j++)
	{
		news[i + j] = s2[j];
	}
	return (news);
}
