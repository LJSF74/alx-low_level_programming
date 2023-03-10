#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - prints the program name
 * @argc: number of args
 * @argv: array of args
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int n;
	int i;
	int l;
	int j;
	char *test;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		n = 0;
		for (i = 1; i < argc; i++)
		{
			test = argv[i];
			l = strlen(test);

			for (j = 0; j < l; j++)
			{
				if (isdigit(*(test + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			n += atoi(argv[i]);
		}

		printf("%d\n", n);
	}
	return (0);
}
