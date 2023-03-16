#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - concats two strings
 * @s1: string one
 * @s2: string two
 * @n: num of bytes of s2
 * Return: s3
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned long int i;
	int j, l;
	char *s3;
	char *w1, *w2;

	w1 = s1 == NULL ? "" : s1;
	w2 = s2 == NULL ? "" : s2;
	l = n >= strlen(w2) ? strlen(w2) : n;
	s3 = malloc(strlen(w1) + l + 1);
	if (s3 == NULL)
	{
		printf("Can't allocate memory");
		free(s3);
		return (s3);
	}
	for (i = 0 ; i < strlen(w1) ; i++)
	{
		s3[i] = w1[i];
	}
	for (j = 0 ; j < l ; j++)
	{
		s3[i + j] = w2[j];
	}
	return (s3);
}
