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
	int n = 0;
	int i;
	unsigned long int j;
	char *test;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			test = argv[i];
			for (j = 0 ; j < strlen(test); j++)
			{
				if(isdigit(test[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}	
			if (isdigit(*argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				n += atoi(argv[i]);
			}
		}
		printf("%d\n", n);
	}
	return (0);
}
